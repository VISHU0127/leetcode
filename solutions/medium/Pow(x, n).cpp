// Title: Pow(x, n)
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/pow(x,-n)/

        while(binForm > 0){
        if(x == -1 && n % 2 != 0) return -1.0;
        if(x == -1 && n % 2 == 0) return 1.0;
        if(x == 1) return 1.0;
        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        long binForm = n;
    double myPow(double x, int n) {
public:
class Solution {
        if(binForm < 0){
                  x = 1/x;
                  binForm = -binForm;
            }
        double ans = 1; 
