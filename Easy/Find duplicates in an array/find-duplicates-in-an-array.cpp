//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
   std::vector<int> duplicates(long long arr[], int n) {
    std::unordered_set<int> s;
    std::unordered_set<int> p;
    std::vector<int> v;
    
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) != s.end()) {
            p.insert(arr[i]);
        } else {
            s.insert(arr[i]);
        }
    }
    
    v.assign(p.begin(), p.end());
    
    if (v.size() == 0) {
        v.push_back(-1);
        return v;
    } else {
        std::sort(v.begin(), v.end());
        return v;
    }
}
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends