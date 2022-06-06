//problem link : https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int firstBack = m-1, finalBack = m+n-1, secondBack = n-1;
        while (secondBack>=0) {
            if (firstBack >=0 && nums1[firstBack] > nums2[secondBack]){
                nums1[finalBack--] = nums1[firstBack--];
            }else{
                nums1[finalBack--] = nums2[secondBack--];
            }
        }
    }
};