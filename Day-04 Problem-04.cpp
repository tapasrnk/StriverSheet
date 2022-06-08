//problem link : https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1#
class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int currentSum = 0;
        int ans = 0;
        unordered_map<int,int> hashMap;
        
        for (int i = 0; i < n; i++) {
            currentSum += A[i];
            if (currentSum == 0) {
                ans = max(ans, i+1);
            }
            else if (hashMap.find(currentSum) != hashMap.end()) {
                int len = i - hashMap[currentSum];
                ans = max(ans, len);
            }else{
                hashMap[currentSum] = i;
            }
        }
        
        return ans;
    }
};