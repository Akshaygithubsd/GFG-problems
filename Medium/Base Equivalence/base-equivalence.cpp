//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  bool canRepresentWithMDigits(int n, int m) {
    // Iterate through bases from 2 to 32
    for (int base = 2; base <= 32; ++base) {
        int num = n;
        int digits = 0;

        // Convert n to the current base
        while (num > 0) {
            num /= base;
            digits++;
        }

        // Check if the number of digits matches m
        if (digits == m) {
            return true;
        }
    }

    return false;
}

string baseEquiv(int n, int m) {
    return canRepresentWithMDigits(n, m) ? "Yes" : "No";
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        cout<<ob.baseEquiv(n,m)<<endl;
    }
    return 0;
}

// } Driver Code Ends