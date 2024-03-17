//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
       
    vector<long long> result(n, -1); // Initialize result with -1 for elements without a greater element
    stack<long long int> st;

    // Iterate through the array from right to left
    for (int i = n - 1; i >= 0; --i) {
        // Pop elements from the stack while they are smaller than the current element
        while (!st.empty() && arr[i] >= st.top()) {
            st.pop();
        }

        // If there is a greater element to the right, update the result
        if (!st.empty()) {
            result[i] = st.top();
        }

        // Push the current element onto the stack for the next iteration
        st.push(arr[i]);
    }

    return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends