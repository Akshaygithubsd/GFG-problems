//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
   int s_len = s.size();
    int x_len = x.size();

    // If x is empty, return 0 as per the problem statement
    if (x_len == 0) return 0;

    // Iterate through the string s
    for (int i = 0; i <= s_len - x_len; ++i) {
        // Check if x matches the substring starting from index i in s
        int j;
        for (j = 0; j < x_len; ++j) {
            if (s[i + j] != x[j]) {
                break;  // If characters don't match, break the loop
            }
        }
        // If all characters of x match with the substring starting at index i in s, return the index i
        if (j == x_len) {
            return i;
        }
    }
    return -1;
}