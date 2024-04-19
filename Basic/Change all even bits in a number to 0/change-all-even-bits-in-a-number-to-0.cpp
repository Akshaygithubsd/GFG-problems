//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int convertEvenBitToZero(long long int N) {
        long long int mask = 0xAAAAAAAA;

    // Perform a bitwise AND operation with the mask to change even-positioned bits to 0
    return N & mask;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.convertEvenBitToZero(n) << endl;
    }
    return 0;
}

// } Driver Code Ends