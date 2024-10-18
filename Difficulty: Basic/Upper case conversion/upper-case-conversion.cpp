//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    // code here
    string res="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            res+=' ';
        }else if(i==0 || s[i-1]==' '){
            res+=toupper(s[i]);
        }else{
            res+=s[i];
        }
    }return res;
        
}