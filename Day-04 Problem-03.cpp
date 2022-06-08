//problem link : https://leetcode.com/problems/4sum/solution/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet;
        for (const int &num : nums) {
            hashSet.insert(num);
        }
        
        int longestStreak = 0;
        
        for (const int &num : nums) {
            if (hashSet.find(num-1) == hashSet.end()) {
                int currentNum = num;
                int currentStreak = 1;
                
                while (hashSet.find(currentNum+1)!=hashSet.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }
                
                longestStreak = max(longestStreak,currentStreak);
            }
        }
        
        return longestStreak;
    }
};