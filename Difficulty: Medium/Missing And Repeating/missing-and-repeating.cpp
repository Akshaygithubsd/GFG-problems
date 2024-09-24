//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        long long n=arr.size();
        vector<int> v;
        long long w=n*(n+1)/2;
        long long s,t=0;
        for(int i=0;i<n;i++){
            
            m[arr[i]]++;
            t+=arr[i];
        }
        for(auto x:m){
            if(x.second==2){
                v.push_back(x.first);
                s=x.first;
            }
        }
        long long res=w+s-t;
        v.push_back(res);return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends