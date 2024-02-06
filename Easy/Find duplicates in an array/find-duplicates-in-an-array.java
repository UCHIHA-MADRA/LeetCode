//{ Driver Code Starts
import java.io.*;
import java.util.*;
import java.util.Map.Entry;

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) a[i] = sc.nextInt();
            Solution g = new Solution();
            ArrayList<Integer> ans = g.duplicates(a, n);
            for (Integer val : ans) System.out.print(val + " ");
            System.out.println();
        }
    }
}

// } Driver Code Ends


class Solution {
    public static ArrayList<Integer> duplicates(int arr[], int n) {
        // code here
        int[] v = new int[(int)10e5 + 1];
        ArrayList<Integer> r = new ArrayList<>();
        for (int x = 0; x < arr.length; x++) {
            // Icnrement the element
            // If repeated more than one, ignore it
            if (++v[arr[x]] == 2) r.add(arr[x]);
        }
        if (r.isEmpty()) r.add(-1);
        Collections.sort(r); // Sort the list will take more time, but the challenge check by numeric order
        return r;
    }
}
