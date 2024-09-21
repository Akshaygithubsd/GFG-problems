//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        
        stack<string>s;
        string word="";
        for(int i=0;i<str.length();i++){
            
            if(str[i]=='.'){
                s.push(word);
                word="";
            }else{
                word+=str[i];
            }
        }s.push(word);
        string w="";
        while(s.empty()==false){
            w+=s.top();
            s.pop();
            if(s.empty()==false){
                w+='.';
            }
        }return w;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends