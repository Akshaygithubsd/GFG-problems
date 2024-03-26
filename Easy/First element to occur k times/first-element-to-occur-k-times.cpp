//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
   int firstElementKTime(int n, int k, int arr[]) {
    std::unordered_map<int, int> countMap;

    // Count occurrences of each element in the array
    for (int i = 0; i < n; ++i) {
        countMap[arr[i]]++;
        
        // Check if the current element occurs at least k times
        if (countMap[arr[i]] == k) {
            return arr[i]; // Return the element
        }
    }

    return -1; // No such element found
}
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(n, k, a)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends