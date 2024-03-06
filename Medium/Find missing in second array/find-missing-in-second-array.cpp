//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	vector<int> findMissing(int arr[], int arr1[], int n, int m) 
	{ 
	    // Your code goes herevector<long long> v;
    unordered_set<long long> s(arr1, arr1 + m); 
    vector<int>v;// Constructing a set from arr1

    // Finding missing elements from arr in arr1
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) == s.end()) {
            v.push_back(arr[i]);
        }
    }return v;
	} 
};
	

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<int> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends