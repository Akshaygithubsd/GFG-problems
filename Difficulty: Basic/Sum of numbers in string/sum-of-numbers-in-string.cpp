//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	int res=0;
    	int sum=0;
    	for(int i=0;i<str.length();i++){
    	   if(isdigit(str[i])){
    	       
    	    while(isdigit(str[i]) && i<str.length()){
    	       
    	       res=res*10+(str[i]-'0');
    	       i++;
    	    }
    	    
    	
    	        sum+=res;
    	        res=0;
    	        i--;}
    	    
    	}sum+=res;
    	return sum;
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends