//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        bool check (string s)
        {
        	//code here.
        	bool res=true;
        	for(int i=0;i<s.length()-1;i++){
        	    if(s[i]!=s[i+1]){
        	        res=false;
        	    }
        	}return res;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends