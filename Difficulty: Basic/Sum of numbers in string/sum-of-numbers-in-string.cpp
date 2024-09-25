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
    {	int c=0;
    int sum=0;
    	bool p=false;
    	for(char ch:str){
    	    if(isdigit(ch)){
    	        c=c*10+ (ch-'0');
    	        p=true;
    	    }else{
    	        if(p){
    	        sum+=c;
    	        c=0;
    	        p=false;
    	        }
    	    }
    	}
    	if(p){
    	    sum+=c;
    	}
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