//problem link : https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<vector<int>> ans{intervals[0]};
        for (int i = 1; i < n; i++){
            if (ans.back()[1] < intervals[i][0]) {
                ans.push_back(intervals[i]);
            }else if(intervals[i][1] > ans.back()[1]){
                ans.back()[1] = intervals[i][1];
            }
        }
        return ans;
    }
};