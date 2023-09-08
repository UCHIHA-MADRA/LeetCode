class Solution {
public:
    int minPairSum(vector<int>& nums) {
         std::sort(nums.begin(), nums.end());  // Sort the array in ascending order.
    int n = nums.size();
    int left = 0, right = n - 1;
    int maxPairSum = INT_MIN;  // Initialize the maximum pair sum to negative infinity.

    while (left < right) {
        maxPairSum = std::max(maxPairSum, nums[left] + nums[right]);
        left++;
        right--;
    }

    return maxPairSum;
    }
};