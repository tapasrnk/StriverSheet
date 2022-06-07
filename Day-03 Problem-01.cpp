//problem link : https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int l = -1, r = n * m ;
        while (l + 1 < r) {
            int mid = l + (r - l) / 2;
            int row = mid / m;
            int col = mid % m;
            if (matrix[row][col] > target) {
                r = mid;
            }else {
                l = mid;
            }
        }
        if (l != -1 && matrix[l / m][l % m] == target) {
            return true;
        }
        return false;
    }
};