//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int setBit(int n)
    {
       if (n == 0) {
        return n;
    }

    // Find the rightmost unset bit by finding the first zero bit and then setting it
    unsigned int unsetBit = ~n & (n + 1);
    
    // Set the rightmost unset bit in N
    return n | unsetBit;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends