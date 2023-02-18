//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int arr[], int n, int k)
    {
         int count=1;
         int res=0;
         if(k==1)
         return arr[0];
       for(int i=1;i<n;i++){
           for(int j=i-1;j>=0;j--)
           if(arr[i]==arr[j]){
               count++;
               if(count==k){
               res=arr[i];
             return res;
               }
           }
           
       count=1;
       }
       
       return -1;
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
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends