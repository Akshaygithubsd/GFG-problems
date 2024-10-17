//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string longest(vector<string> &v) {
        // code here
        int max=0;
        string res="";
        for(int i=0;i<v.size();i++){
            if(v[i].size()>max){
                max=v[i].size();
                if(res!=""){
                    res="";
                }
                res+=v[i];
            }
    }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> names;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        string str;
        while (ss1 >> str) {
            names.push_back(str);
        }
        Solution obj;
        string res = obj.longest(names);
        cout << res << "\n";
    }
}

// } Driver Code Ends