//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int N) {
    
     std::string strN = std::to_string(N);

    // Iterate through each character of the string
    for (char &c : strN) {
        if (c == '0') {
            // Replace '0' with '5'
            c = '5';
        }
    }

    // Convert the modified string back to an integer
    return std::stoi(strN);
}