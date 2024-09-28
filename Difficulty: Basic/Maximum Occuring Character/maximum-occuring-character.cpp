//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
   
    char getMaxOccuringChar(string str)
    {
      unordered_map<char,int>m;
      char ch='z'+1;
      char res;
      int maxfreq=0;
      for(int i=0;i<str.length();i++){
          m[str[i]]++;
          if(m[str[i]]>maxfreq || (m[str[i]]==maxfreq && str[i]<ch)){
              ch=str[i];
              res=str[i];
              maxfreq=m[str[i]];
          }
      }return ch;
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