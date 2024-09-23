//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
 bool isEven(int n) {
    return n % 2 == 0;
}

bool isOdd(int n) {
    return n % 2 != 0;
}

string oddEven(string s) {
    unordered_map<char, int> m;
    int x = 0; // Count for even-positioned characters with even frequency
    int y = 0; // Count for odd-positioned characters with odd frequency
    
    // Count frequency of each character in the string
    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }
    
    // Loop through each character's frequency in the map
    for (auto entry : m) {
        char ch = entry.first;
        int freq = entry.second;
        
        // Check if both character position and frequency are odd
        if (isOdd(ch - 'a' + 1) && isOdd(freq)) {
            y++;
        }
        // Check if both character position and frequency are even
        else if (isEven(ch - 'a' + 1) && isEven(freq)) {
            x++;
        }
    }

    // Return "ODD" if sum of x and y is odd, otherwise return "EVEN"
    if (isOdd(x + y)) {
        return "ODD";
    } else {
        return "EVEN";
    }
}
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends