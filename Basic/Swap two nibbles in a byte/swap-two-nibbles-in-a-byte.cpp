//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int swapNibbles(int N){
        unsigned int leftNibble = (N & 0xF0) >> 4;
    // Extract the right nibble (4 least significant bits)
    unsigned int rightNibble = (N & 0x0F) << 4;
    // Combine the swapped nibbles to form the resulting number
    return leftNibble | rightNibble;
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
        Solution ob;
        cout << ob.swapNibbles(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends