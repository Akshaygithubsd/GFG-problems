//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		long long int find_fact(int N)
		{
		     if (N < 0) {
    // Factorial is not defined for negative numbers
    return -1;
  } else if (N == 0) {
    return 1;
  } else {
    long long int result = 1;
    for (int i = 1; i <= N; i++) {
      result *= i;
    }
    return result;
  }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	long long int ans = ob.find_fact(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends