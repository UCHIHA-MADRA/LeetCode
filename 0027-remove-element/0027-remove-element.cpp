class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
//         int[] expectedNums ;
        
        
        
//         int k = removeElement(nums, val); // Calls your implementation

//        assert k == expectedNums.length;
//        sort(nums, 0, k); // Sort the first k elements of nums
//        for (int i = 0; i < actualLength; i++) {
//        assert nums[i] == expectedNums[i];
// }
//         for(int i=0;i<nums.length;i++)
//         {
            
//         }
        
    int n = nums.size();
    int k = 0; // Variable to keep track of the number of elements not equal to val
    
    for (int i = 0; i < n; ++i) {
        if (nums[i] != val) {
            nums[k] = nums[i]; // Move non-val element to the front
            ++k;
        }
    }
    
    return k;
    }
};