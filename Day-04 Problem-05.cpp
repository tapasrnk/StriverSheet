//problem link : https://www.interviewbit.com/problems/subarray-with-given-xor/
int Solution::solve(vector<int> &A, int B) {
    int ans = 0;
    unordered_map<int, int> hashMap;
    int xorTillNow = 0;

    for (const int &num : A) {
        xorTillNow = xorTillNow ^ num;
        if (xorTillNow == B) {
            ans++;
        }
        int need = B ^ xorTillNow;
        ans += hashMap[need];
        hashMap[xorTillNow]++;
    }

    return ans;
}
