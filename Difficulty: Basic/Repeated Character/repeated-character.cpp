//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        unordered_map<char,int>m;char res ='\0';
        
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
           if(m[s[i]]>1){
               res=s[i];break;
           }
        }if(res!='\0'){
        return res;}return '#';
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends