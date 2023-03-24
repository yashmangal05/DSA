//https://leetcode.com/submissions/detail/921315046/
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        if(n == 1) return true;
        if(n%3 != 0) return false;
        float num = n;
        float deno = 3;
        float ans = (float)((float)log(n)/(float)log(3));
        cout << ans;
        float a = floor(ans);
        if(ans > a){
            return false;
        }
        return true;
    }
};