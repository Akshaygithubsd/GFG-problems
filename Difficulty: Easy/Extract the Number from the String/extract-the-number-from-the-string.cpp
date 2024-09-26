//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  long long ExtractNumber(string sentence) {
    long long res = -1;  // Initialize result to -1
    string num = "";     // To accumulate current number as a string
    bool containsNine = false;  // Flag to check if number contains '9'

    for (int i = 0; i < sentence.length(); i++) {
        if (isdigit(sentence[i])) {
            if (sentence[i] == '9') {
                containsNine = true;  // Mark that this number contains '9'
            }
            num += sentence[i];  // Accumulate digits of the number
        } else {
            if (!num.empty() && !containsNine) {  // Check if num is valid (doesn't contain '9')
                res = max(res, stoll(num));  // Update the result with the largest valid number
            }
            num = ""; 
            containsNine = false; 
        }
    }

    if (!num.empty() && !containsNine) {  // Handle the last number after the loop
        res = max(res, stoll(num));
    }

    return res;  // Return the largest valid number, or -1 if no valid number is found
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