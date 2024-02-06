//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
           int n= arr.size();
        int minsum = INT_MAX;
        sort(arr.begin(),arr.end());
        int ans =0;
        for(int i=0;i<n;i++){
            int first = arr[i];
            int start = i+1;
            int end = n-1;
                while(start < end){
                    int sum = first+arr[start]+arr[end];
                    if(sum==target) return sum;
                    if(abs(target-sum)<abs(target-minsum))
                        minsum = sum;
                    if(abs(target-sum)==abs(target-minsum))
                        minsum = max(sum,minsum);
                    if(sum>target) end--;
                    else start++;
                }
        }
        return minsum;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.

// } Driver Code Ends