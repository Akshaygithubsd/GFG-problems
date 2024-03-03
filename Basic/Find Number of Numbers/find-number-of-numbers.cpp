//{ Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}
// } Driver Code Ends


/*Complete the function given below*/


int countOccurrences(int num, int k) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == k) {
            count++;
        }
        num /= 10;
    }
    return count;
}
int num(int arr[], int n, int k)
{
     //add code here. int count = 0;
    int totalOccurrences = 0;
    for (int i = 0; i < n; i++) {
        totalOccurrences += countOccurrences(arr[i], k);
    }
    return totalOccurrences;
}
