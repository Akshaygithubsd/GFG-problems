//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string res;
        unordered_set<char>p(s1.begin(),s1.end());
        unordered_set<char>q(s2.begin(),s2.end());
        for(int i=0;i<s1.length();i++){
            if(q.find(s1[i])==q.end()){
                res+=s1[i];
            }
        }
        for(int i=0;i<s2.length();i++){
            if(p.find(s2[i])==p.end()){
                res+=s2[i];
            }
        }if(res.length()==0){
            return "-1";
        }else{
            return res;
        }
        
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends