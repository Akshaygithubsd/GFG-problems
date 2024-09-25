//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
	string printMinIndexChar(string s, string patt)
	{
	    // Code here
	    string res="";
	    int i=0;
	    for(int j=0;j<patt.length();j++){
	        if(s[i]==patt[j]){
	            res+=s[i];break;
	        }else if(j==patt.length()-1 && i<s.length()){
	            j=-1;i++;
	        }
	    }if(res==""){
	        return "$";
	    }
	    return res;
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}
// } Driver Code Ends