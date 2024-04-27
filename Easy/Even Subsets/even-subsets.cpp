//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*Function to count subset with even sum
* arr : array input
* N : size of array
*/
class Solution{
  public:
    int countSumSubsets(int arr[], int n){
       
    int count = -1;
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += arr[i];
            }
        }
        if (sum % 2 == 0) {
            count++;
        }
    }
    
    return count;
        
        
    }
};

//{ Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	            cin >> arr[i];
	        }
	    Solution obj;
	    cout << obj.countSumSubsets(arr, N) << endl;
	}
	
	return 0;
}
// } Driver Code Ends