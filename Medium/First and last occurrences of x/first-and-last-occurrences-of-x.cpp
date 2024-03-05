//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
          vector<int> v;
    int low = 0;
    int high = n - 1;
    
    // Finding first occurrence
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < x) {
            low = mid + 1;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            if (mid == 0 || arr[mid] != arr[mid - 1]) {
                v.push_back(mid);
                break;
            } else {
                high = mid - 1;
            }
        }
    }
    
    low = 0;
    high = n - 1;
    
    // Finding last occurrence
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < x) {
            low = mid + 1;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            if (mid == n - 1 || arr[mid] != arr[mid + 1]) {
                v.push_back(mid);
                break;
            } else {
                low = mid + 1;
            }
        }
    }
    
    if (v.empty()) {
        v.push_back(-1);
        v.push_back(-1);
        // If element not found, pushing -1
    }
    
    return v;
        
    }
   
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends