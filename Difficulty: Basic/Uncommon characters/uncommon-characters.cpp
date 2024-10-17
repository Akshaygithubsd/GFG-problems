//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            unordered_set<char>m(A.begin(),A.end());
            unordered_set<char>n(B.begin(),B.end());
            
            
            string res="-1";
            set<char>v;
            for(int i=0;i<A.length();i++){
                if(n.find(A[i])==n.end()){
                    v.insert(A[i]);
                }
            }
            for(int i=0;i<B.length();i++){
                if(m.find(B[i])==m.end()){
                    v.insert(B[i]);
                }
            }
            //sort(v.begin(),v.end());
            if(v.size()==0){
                return res;
            }
            res=string(v.begin(),v.end());return res;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends