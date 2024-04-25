//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
   long long nearestPowerOf2(long long N) {
    if (N && !(N & (N - 1))) {
        return N; // N is already a power of 2
    }

    // Find the most significant bit (MSB) position
    int msbPos = 0;
    long long temp = N;
    while (temp > 0) {
        temp >>= 1;
        msbPos++;
    }

    // Return the next power of 2 by left-shifting 1LL by msbPos positions
    return 1LL << msbPos;
}

};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.nearestPowerOf2(N)<<"\n";
    }
}
// } Driver Code Ends