class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {    std::vector<int> duplicates;

       int n = nums.size();
    for (int i = 0; i < n; ++i) {
        while (nums[i] != nums[nums[i] - 1]) {
            std::swap(nums[i], nums[nums[i] - 1]);
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (nums[i] != i + 1) {
            duplicates.push_back(nums[i]);
        }
    }
    
    return duplicates;
    }
};