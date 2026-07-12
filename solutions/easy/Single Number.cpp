// Title: Single Number
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums){
          ans ^= val;
        }
        return ans;
    }
};
