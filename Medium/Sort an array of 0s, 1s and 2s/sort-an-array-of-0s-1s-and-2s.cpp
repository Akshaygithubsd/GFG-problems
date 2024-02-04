//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
       int i=0,j=0,hi=n-1,k=0;
       while(j<=hi){
           if(a[j]==0){
               swap(a[j],a[i]);
               i++;
               j++;
           }else if(a[j]==1){
               j++;
           }else{
               swap(a[j],a[hi]);
               hi--;
           }
       }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends