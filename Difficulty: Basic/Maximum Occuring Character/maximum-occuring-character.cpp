//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        unordered_map<char,int>m;
        for(int i=0;i<str.length();i++){
            m[str[i]]++;
        }
        int max=0;
        char res;
        for(auto x:m){
            if(x.second>max){
                max=x.second;
                res=x.first;
            }else if(x.second==max && x.first<res){
                res=x.first;
            }
        }return res;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends