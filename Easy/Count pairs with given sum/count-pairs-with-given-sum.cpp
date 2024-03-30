//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
         unordered_map<int, int> frequency;
    int count = 0;

    // Count the frequency of each element in the array
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }


    for (int i = 0; i < n; i++) {
        int complement = k - arr[i];
        // If the complement exists and is not the same as the current number
        if (frequency.find(complement) != frequency.end() && complement != arr[i]) {
            count += frequency[complement];
        }
        // If the complement is the same as the current number, count its frequency - 1
        if (complement == arr[i]) {
            count += frequency[complement] - 1;
        }
    }

    // Each pair is counted twice, so divide the count by 2
    return count / 2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends