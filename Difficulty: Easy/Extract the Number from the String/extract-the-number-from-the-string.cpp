//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
   bool isContainNine(long long n){
       
       bool ans=false;
       
       while(n){
           int rem=n%10;
           if(rem==9){
               ans=true;
           }
           n=n/10;
       }
       
       return ans;
   }
  
  
  
    long long ExtractNumber(string sentence) {

bool isFoundNumber = false;
std::set<long long> numbers;
std::string temp;

for (int i = 0; i < sentence.length(); i++) {

    if (isdigit(sentence[i])) {
        isFoundNumber = true;
        temp.push_back(sentence[i]);  // Collect digits in the temp string
    }

    // When a space is found after a number, add it to the set
    if (isFoundNumber && sentence[i] == ' ') {
        if (!temp.empty()) {  // Ensure temp is not empty before converting
            numbers.insert(stoll(temp));
            temp = "";  // Reset the temp string for the next number
        }
        isFoundNumber = false;  // Reset the flag after inserting the number
    }
}

// Insert the last number if there is one after the loop ends
if (!temp.empty()) {
    numbers.insert(stoll(temp));
}

 long long maxNumber=-1;

  for (long long element : numbers) {
       if(!isContainNine(element)){
           maxNumber=max(maxNumber,element);
       }
    }


return maxNumber;
    
}
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends