//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string S)
        {
            //code here.
            vector<int>v;
            int l=0;int u=0;int n=0;int s=0;
            for(int i=0;i<S.length();i++){
                if(isupper(S[i])){
                    u++;
                }else if(islower(S[i])){
                    l++;
                }else if(isdigit(S[i])){
                    n++;
                }else{
                    s++;
                }
            }v.push_back(u);
            v.push_back(l);
            v.push_back(n);
            v.push_back(s);
            return v;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends