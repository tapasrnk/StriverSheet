//problem link : https://leetcode.com/problems/powx-n/
class Solution {
public:
    bool isSet(int n, int bit) {
        return ((n & (1 << bit)) != 0);
    }
    double myPow(double x, int n) {
        //binary exponentation
        double ans = 1.0;
        double temp = x;
        
        for (int bit = 0; bit < 32; bit++) {
            if (isSet(abs(n),bit)) {
                ans *= temp;
            }
            temp *= temp;
        }
        
        return (n >= 0) ? ans : (1.0 / ans);
    }
};