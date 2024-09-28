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
      unordered_map<char, int> frequency;
    int maxCount = 0;
    char maxChar = 'z' + 1;
        frequency[ch]++;
        if (frequency[ch] > maxCount || 
           (frequency[ch] == maxCount && ch < maxChar)) {
            maxCount = frequency[ch];
            maxChar = ch;
        }
    }

    return maxChar;
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