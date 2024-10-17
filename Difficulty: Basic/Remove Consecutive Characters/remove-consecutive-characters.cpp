//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        // If the string is empty or has one character, return it as is.
    if (S.length() <= 1) return S;

    // Initialize a string to store the result.
    string result;
    
    // Append the first character to the result (it has no previous character to compare with).
    result += S[0];

    // Traverse the string from the second character onwards.
    for (int i = 1; i < S.length(); i++) {
        // If the current character is not the same as the previous character, add it to the result.
        if (S[i] != S[i - 1]) {
            result += S[i];
        }
    }

    // Return the result string without consecutive duplicates.
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
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends