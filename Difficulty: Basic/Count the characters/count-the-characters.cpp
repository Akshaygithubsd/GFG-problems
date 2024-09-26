//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N)
        {
            //code here.
            unordered_map<char, int> occurrenceMap; // Map to store the distinct occurrence counts
    char currentChar = '\0'; // To track the current character
    int count = 0; // To track the count of consecutive occurrences

    for (char ch : S) {
        // If the character is the same as the previous one, increase the count
        if (ch == currentChar) {
            continue; // Skip counting consecutive occurrences
        } else {
            // If we have counted some characters before, update the map
            if (currentChar != '\0') {
                occurrenceMap[currentChar]++; // Increment the count for the previous character
            }
            currentChar = ch; // Update the current character
            occurrenceMap[currentChar] = occurrenceMap[currentChar]; // Initialize it if not already
        }
    }

    // Don't forget to update the map for the last character
    if (currentChar != '\0') {
        occurrenceMap[currentChar]++;
    }

    // Count how many characters have exactly N occurrences
    int resultCount = 0;
    for (const auto &entry : occurrenceMap) {
        if (entry.second == N) {
            resultCount++; // Increase the count if occurrences match N
        }
    }

    return resultCount;
}
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends