//problem link : https://leetcode.com/problems/next-permutation/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int secondLastIndex = nums.size() - 2;
        int LastIndex = nums.size() - 1;
        int i = secondLastIndex;
        
        while (i >= 0 && nums[i+1] <= nums[i]) {
            i--;
        }
        
        if (i >= 0) {
            int j = LastIndex;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums, i+1);
    }
    void reverse(vector<int>&num, int start){
        int i = start, j = num.size()-1;
        while (i < j) {
            swap(num[i], num[j]);
            i++;
            j--;
        }
    }
};