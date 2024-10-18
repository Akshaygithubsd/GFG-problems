//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    
    string upper(string p){
        string res="";
        for(int i=0;i<p.length();i++){
            res+=toupper(p[i]);
        }return res;
    }
    string lower(string p){
        string res="";
        for(int i=0;i<p.length();i++){
            res+=tolower(p[i]);
        }return res;
    }
    
    
    string modify (string s)
    {
        // your code here
        string res="";
        if(islower(s[0])){
            res=lower(s);
            return res;
        }else{
            res=upper(s);
            return res;
        }
        
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
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends