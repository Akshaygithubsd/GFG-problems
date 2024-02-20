//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& arr, int n) {
       unordered_set<int>s(arr.begin(),arr.end());
       int i=1;
       int res=-1;
       while(i<=n){
           if(s.find(i)==s.end()){
               res=i;
               break;
       }i++;
    }return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends