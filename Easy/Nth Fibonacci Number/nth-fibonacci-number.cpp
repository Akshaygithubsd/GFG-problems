//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  const int MOD = 1000000007;


// Function to perform matrix multiplication
vector<vector<long long>> multiplyMatrices(const vector<vector<long long>>& A, const vector<vector<long long>>& B) {
    int n = A.size();
    vector<vector<long long>> result(n, vector<long long>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                result[i][j] = (result[i][j] + (A[i][k] * B[k][j]) % MOD) % MOD;
            }
        }
    }
    return result;
}

// Function to perform matrix exponentiation
vector<vector<long long>> matrixExponentiation(const vector<vector<long long>>& base, long long exp) {
    if (exp == 1) return base;
    vector<vector<long long>> half = matrixExponentiation(base, exp / 2);
    vector<vector<long long>> result = multiplyMatrices(half, half);
    if (exp % 2 == 1) {
        result = multiplyMatrices(result, base);
    }
    return result;
}

// Function to calculate the nth Fibonacci number modulo MOD
long long nthFibonacci(int n) {
    if (n <= 1) return n;

    vector<vector<long long>> base = {{1, 1}, {1, 0}};
    vector<vector<long long>> result = matrixExponentiation(base, n - 1);

    return result[0][0] % MOD;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends