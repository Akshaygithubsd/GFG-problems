//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string computeParity(int N) {
      int count = 0;

    // Count the number of set bits in the binary representation of N
    while (N > 0) {
        if (N & 1) {
            count++;
        }
        N >>= 1;
    }

    // Check if the count is odd or even
    if (count % 2 == 0) {
        return "even"; // Even parity
    } else {
        return "odd";  // Odd parity
    }}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.computeParity(N) << endl;
    }
    return 0;
}
// } Driver Code Ends