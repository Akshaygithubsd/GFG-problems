//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;
 

int countValues (int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		cout<<countValues(n)<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method */
int countValues (int N)
{
   int count = 0;

    // Iterate through all integers from 0 to N
    for (int i = 0; i <= N; ++i) {
        // Check if the condition n + i = n XOR i holds true
        if ((N + i) == (N ^ i)) {
            count++;
        }
    }

    return count;
}
 