//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
         long long  current_sum=arr[0];
      long long  best_sum=arr[0];
      for(int i=1;i<n;i++)
      {
          if(current_sum>0)
          {
             current_sum+=arr[i];
          }
          else
          current_sum=arr[i];
          if(current_sum>best_sum)
          {
              best_sum=current_sum;
          }
      }
      return best_sum;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends