//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
   unordered_set<char> charSet;
    int maxLength = 0;
    int left = 0; 

    for (int right = 0; right < S.length(); ++right) {
        while (charSet.find(S[right]) != charSet.end()) {
            charSet.erase(S[left]);
            left++;
        }
        charSet.insert(S[right]);
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;

}