//{ Driver Code Starts
#include <iostream>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
         for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++)
           cout<<i<<" ";
         cout<<endl;
        }
    }
};
