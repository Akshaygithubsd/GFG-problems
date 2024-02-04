//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    // Function to find the days of buying and selling stock for max profit.
    vector<vector<int>> stockBuySell(vector<int> arr, int n) {
        std::vector<std::vector<int>> v;
        int i = 1;
        int pro=0;
        int j = 0;
        while (i < n) {
            if (arr[i] > arr[i - 1]) {
                i++;
            } else {
                if(j<i-1){
                    
                    v.push_back({j, i - 1});
                    pro+=arr[i-1]-arr[j];
                }
                
                j = i;
                i++;
            }
        }
        // If the last element is part of an increasing sequence, include it.
        if (j < i - 1) {
            v.push_back({j, i - 1});
            pro+=arr[i-1]-arr[j];
        }
        return v;
        if(pro==0){
            cout<<"no profit";
        }else{
            cout<<"max pro"<<pro<<endl;
        }
    }
};


//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends