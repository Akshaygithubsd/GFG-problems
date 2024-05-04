//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
           long long result = 0;
    for (int bit = 0; bit < 64; ++bit) {
        long long countOnes = 0;
        for (int i = 0; i < n; ++i) {
            if ((arr[i] >> bit) & 1)
                countOnes++;
        }
        result += (countOnes * (countOnes - 1) / 2) * (1LL << bit); // Number of pairs where ith bit is set
    }
    return result;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        long long Arr[N];
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        Solution ob;
        cout << ob.pairAndSum(N, Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends