//https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution {
public:
    int trailingZeroes(int n) {
        return n == 0 ? (n/5) : (n/5) + trailingZeroes(n/5);
    }
};