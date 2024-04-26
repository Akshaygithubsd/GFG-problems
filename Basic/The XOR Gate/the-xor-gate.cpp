//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int xorGate(vector<int> arr, int N) {
    int result = 0;
    for (int bit : arr) {
        result ^= bit; // Perform XOR operation
    }
    return result;
}
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.xorGate(v,N) << endl;
    }
    return 0; 
}
// } Driver Code Ends