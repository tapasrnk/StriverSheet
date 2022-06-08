//problem link : https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hashMap(256, -1);
        int n = s.size();
        int ans = 0, start = -1;
        
        for (int i = 0; i < n; i++) {
            if (hashMap[s[i]] > start) {
                start = hashMap[s[i]];
            }
            hashMap[s[i]] = i;
            ans = max(ans, i - start);
        }
        
        return ans;
    }
};