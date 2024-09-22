//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    unordered_set<char>m;
    
    string res="";
    for(int i=0;i<s.length();i++){
        if(m.find(s[i])!=m.end()){
            res=s[i];break;
        }else{
            m.insert(s[i]);
        }
    }if(res==""){
        return "-1";
    }
    return res;
}