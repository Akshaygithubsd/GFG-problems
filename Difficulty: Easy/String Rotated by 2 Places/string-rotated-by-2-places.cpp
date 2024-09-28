//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    bool isRotated(string a, string b)
    {if (a.length() != b.length()) {
        return false;
    }if (a.length() < 2) {
        return false;
    }

    int len = a.length();
    string leftRotated = a.substr(2) + a.substr(0, 2);
    string rightRotated = a.substr(len - 2) + a.substr(0, len - 2);
return (leftRotated == b || rightRotated == b);
}


};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends