//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string, int> frequency;
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }
    string mostFrequent, secondMostFrequent;
    int maxCount = 0, secondMaxCount = 0;
    for (const auto &pair : frequency) {
        if (pair.second > maxCount) {
            secondMaxCount = maxCount;
            secondMostFrequent = mostFrequent;
            maxCount = pair.second;
            mostFrequent = pair.first;
        } else if (pair.second > secondMaxCount) {
            secondMaxCount = pair.second;
            secondMostFrequent = pair.first;
        }
    }

    return secondMostFrequent;
}
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends