//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        unordered_set<int>s(arr.begin(),arr.end());
        unordered_map<int,int>m;
        vector<int> v;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
            
        }
        for(auto e:m){
            if(e.second==2){
                v.push_back(e.first);
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s.find(i+1)==s.end()){
                v.push_back(i+1);
                break;
               
            }
        }
        return v;
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
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends