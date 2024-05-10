//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int arr[], int n, int key)
    {
        vector<int>v;
       for(int i=0;i<n;i++){
           if(arr[i]==key){
               v.push_back(i);
               break;
           }else if(i==n-1){
                v.push_back(-1);
           }
       }
       for(int i=n-1;i>=0;i--){
           if(arr[i]==key){
               v.push_back(i);
               break;
           }else if(i==0){
                v.push_back(-1);
           }
       }return v;
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
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends