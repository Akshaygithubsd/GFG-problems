//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int arr[],int n){
        // code here
        std::vector<int> v;

    // Handle edge case where n is 0
    if (n == 0) {
        return 0;
    }

    // Iterate through the array
    for (int i = 0; i < n; ++i) {
        // If the current element is different from the last element in v (or it's empty)
        if (v.empty() || arr[i] != v.back()) {
            v.push_back(arr[i]); // Add the current element to v
        }
    }

    // Copy the elements back to arr
    for (int i = 0; i < v.size(); ++i) {
        arr[i] = v[i];
    }

    // Return the size of the modified array
    return v.size();
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends