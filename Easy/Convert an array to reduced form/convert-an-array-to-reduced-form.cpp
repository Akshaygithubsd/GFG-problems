//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	   std::vector<int> sortedArr(arr, arr + n);

    // Sort the copy of the array
    std::sort(sortedArr.begin(), sortedArr.end());

    // Create a map to store the index mapping
    std::unordered_map<int, int> indexMap;
    for (int i = 0; i < n; ++i) {
        indexMap[sortedArr[i]] = i;
    }

    // Update the original array with the reduced form
    for (int i = 0; i < n; ++i) {
        arr[i] = indexMap[arr[i]];
    }
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends