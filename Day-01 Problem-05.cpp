//problem link : https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lastIndex = nums.size() - 1; 
        int j = 0, k = lastIndex;
        
        for (int i=0; i <= k; i++) {
            if (nums[i] == 0)
                swap(nums[i], nums[j++]);
            else if (nums[i] == 2)
                swap(nums[i--], nums[k--]);
        }
    }
};