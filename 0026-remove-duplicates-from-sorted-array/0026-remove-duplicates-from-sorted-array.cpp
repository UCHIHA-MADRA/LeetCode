class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
    if (n <= 1) {
        return n;
    }
    
    int uniqueCount = 1; // Count of unique elements
    for (int i = 1; i < n; ++i) {
        if (nums[i] != nums[i - 1]) {
            nums[uniqueCount] = nums[i]; // Move the unique element to its correct position
            ++uniqueCount;
        }
    }
    
    return uniqueCount;
    }
};