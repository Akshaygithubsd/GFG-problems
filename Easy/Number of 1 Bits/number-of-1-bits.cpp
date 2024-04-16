//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        int count = 0;
    // Iterate through each bit of N
    while (N > 0) {
        // Check if the rightmost bit is set (i.e., it's 1)
        if (N & 1) {
            count++;
        }
        // Right shift N to check the next bit
        N >>= 1;
    }
    return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends