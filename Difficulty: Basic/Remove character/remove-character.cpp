//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        unordered_set<char>s(string1.begin(),string1.end());
        unordered_set<char>q(string2.begin(),string2.end());
        string res="";
        for(int i=0;i<string1.length();i++){
            if(q.find(string1[i])==q.end()){
                res+=string1[i];
            }
        }return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends