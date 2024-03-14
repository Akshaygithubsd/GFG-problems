//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> digits ,int N) {
       
    int carry = 1; // Initialize carry to 1, since we want to add 1 to the number
    
    // Traverse from the least significant digit to the most significant digit
    for (int i = N - 1; i >= 0; --i) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10; // Update the current digit
        
        carry = sum / 10; // Update carry for next iteration
        
        // If carry becomes 0, no need to continue as further digits won't be affected
        if (carry == 0) break;
    }
    
    // If there's still a carry after the loop, insert it at the beginning
    if (carry != 0) {
        digits.insert(digits.begin(), carry);
    }
    
    return digits;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends