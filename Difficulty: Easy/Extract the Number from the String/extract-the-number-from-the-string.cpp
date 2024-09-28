//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {

    istringstream iss(sentence);
    string word;
    long long largest = -1;
    
    while (iss >> word) {
        bool isNumber = true;
        for (char ch : word) {
            if (!isdigit(ch)) {
                isNumber = false;
                break;
            }
        }
        
        if (isNumber && word.find('9') == string::npos) {
            largest = max(largest, stoll(word));
        }
    }
    
    return largest;
}
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends