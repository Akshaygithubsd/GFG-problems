//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) {
    unordered_set<char> seen;
    string result;

    for (char c : S) { // Use S instead of undefined variable str
        // If the character hasn't been seen before, add it to the result string
        if (seen.find(c) == seen.end()) {
            result += c;
            seen.insert(c);
        }
    }

    return result;
}

};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends