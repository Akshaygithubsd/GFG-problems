//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n){
        //code here
        int a;
        int count =0;
        int b=n;
        while(b!=0){
            a=b%10;
            if(a==0){
                b=b/10;
            }
            else if(n%a==0){
                b=b/10;
                count++;
            }else{
                b=b/10;
            }
        }return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends