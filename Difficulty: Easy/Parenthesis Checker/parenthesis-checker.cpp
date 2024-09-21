//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool matching(char a,char b){
        return ((a=='[' && b== ']') || 
        (a=='{' && b=='}') || 
        (a=='(' && b==')'));
    }
    
    bool ispar(string x)
    {
        stack<char>s;
        char ch;
        for(char ch:x){
            
            if(ch=='{' || ch=='(' || ch=='['){
                s.push(ch);
            }else{
                if(s.empty()==true){
                    return false;
                }
               else if( matching(s.top(),ch) ==false){
                   return false;
               }
               s.pop();
                
            }
       }return s.empty()==true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends