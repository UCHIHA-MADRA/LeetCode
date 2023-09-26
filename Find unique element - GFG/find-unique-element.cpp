//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
     int findUnique(int a[], int n, int k) {
        //   int uniqueElement = 0;  // Initialize the result as 0
    
        // for (int i = 0; i < n; i++) {  // Corrected the loop variable from N to n
        //     uniqueElement ^= a[i];     // Corrected the array variable from arr to a
        // }
    
        // return uniqueElement;
          sort(a , a+n);
          
          for(int i=0; i<n; i=i+k){
              if(a[i] != a[i+k-1]){
                  return a[i];
              }
          }
          return -1;
        //brute force method
//   for (int i = 0; i < n; i++) {
//             int count = 0;  // Count the occurrences of a[i]
            
//             for (int j = 0; j < n; j++) {
//                 if (a[i] == a[j]) {
//                     count++;
//                 }
//             }
            
//             if (count % k != 0) {
//                 return a[i];}}
    
    }

};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution obj;
        cout << obj.findUnique(a, n, k) << endl;
    }
}
// } Driver Code Ends