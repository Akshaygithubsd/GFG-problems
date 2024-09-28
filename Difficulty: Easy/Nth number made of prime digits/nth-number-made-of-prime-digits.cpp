//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find nth number made of only prime digits.
    int primeDigits(int n) {
        vector<int> primeDigits = {2, 3, 5, 7};
    queue<string> q;

    // Start with prime digits
    for (int digit : primeDigits) {
        q.push(to_string(digit));
    }

    // Pop elements from the queue until we reach the nth number
    string current;
    for (int i = 0; i < n; ++i) {
        current = q.front();
        q.pop();

        // Generate new numbers by appending prime digits
        for (int digit : primeDigits) {
            q.push(current + to_string(digit));
        }
    }

    // Convert the nth prime digit number to integer and return
    return stoi(current);
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";
    }
}

// } Driver Code Ends