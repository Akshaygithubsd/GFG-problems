//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int N, int S)
    {
       if (S == 0) {
        // If N is 1, the largest number is "0"
        return (N == 1) ? "0" : string(N, '0');
    }

    // If the sum is too large to form a number of N digits
    if (S > 9 * N || S < 1) {
        return "-1";
    }

    string result = "";

    // Loop through each digit position
    for (int i = 0; i < N; ++i) {
        // Find the maximum digit that can be placed in this position
        int digit = min(9, S);
        result += to_string(digit);
        S -= digit; // Decrease the sum by the chosen digit
    }

    return result;
}

};

//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends