//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        if(arr.size()==0){
            return "-1";
        }
        string res="";
        string pre=arr[0];
        for(int i=1;i<arr.size();i++){
            string curr =arr[i];
            int j=0;
            while(pre[j]==curr[j] && j<pre.length() && j<curr.length()){
                j++;
            }
            pre=curr.substr(0,j);
            if(pre.empty()){
                return "-1";
            }
            // if(pre)
        }return pre;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends