//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N){
         unordered_map<char, int> occurrenceMap;
    int n = S.length();
for (int i = 0; i < n; i++) {
        if (i == 0 || S[i] != S[i - 1]) {
            occurrenceMap[S[i]]++;
        }
    }
    int count = 0;
    for (const auto &entry : occurrenceMap) {
        if (entry.second == N) {
            count++;
        }
    }

    return count;
}
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends