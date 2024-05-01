//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findNth(int N){
          if (N % 2 == 1) {
        return 0; // For odd-indexed terms
    } else {
        // Count the number of times N can be divided by 2 until it becomes odd
        int count = 0;
        while (N % 2 == 0) {
            count++;
            N /= 2;
        }
        return count;
    }
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
        cout << ob.findNth(n) << endl;
    }
    return 0;
}

// } Driver Code Ends