//problem link : https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> hashMap;
        vector<int> ans{-1,-1};
        
        for (int i = 0; i < n; i++) {
            int rest = target - nums[i];
            if (hashMap.find(rest) != hashMap.end()) {
                ans[0] = i;
                ans[1] = hashMap[rest];
                break;
            }
            hashMap[nums[i]] = i;
        }
        
        return ans;
    }
};