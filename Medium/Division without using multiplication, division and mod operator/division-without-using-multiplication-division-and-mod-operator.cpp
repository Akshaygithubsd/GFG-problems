//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
   long long divide(long long dividend, long long divisor) {
    // Handle edge case where divisor is 0
    if (divisor == 0) {
        return LLONG_MAX; // Return maximum value for long long
    }

    // Handle overflow case where dividend is LLONG_MIN and divisor is -1
    if (dividend == LLONG_MIN && divisor == -1) {
        return LLONG_MAX; // Return maximum value for long long
    }

    long long quotient = 0;
    // Convert both dividend and divisor to positive numbers
    long long dvd = labs(dividend); // labs function returns the absolute value of a long long integer
    long long dvs = labs(divisor);

    // Determine the sign of the quotient
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

    // Perform integer division without using multiplication, division, or modulo operators
    while (dvd >= dvs) {
        long long temp = dvs, multiple = 1;
        while (dvd >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        dvd -= temp;
        quotient += multiple;
    }

    return sign * quotient;
}

};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}

// } Driver Code Ends