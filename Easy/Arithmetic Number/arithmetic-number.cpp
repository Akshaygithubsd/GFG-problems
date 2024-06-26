//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
       if (C == 0) {
        return (A == B) ? 1 : 0;
    }
    
    // Check if B exists in the arithmetic sequence
    if ((C > 0 && B >= A && (B - A) % C == 0) ||
        (C < 0 && B <= A && (A - B) % (-C) == 0)) {
        return 1;
    } else {
        return 0;
    }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}
// } Driver Code Ends