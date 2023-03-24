//https://leetcode.com/submissions/detail/921213814/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        string three = "Fizz";
        string five = "Buzz";
        string fifteen = "FizzBuzz";
        vector<string> st(n);
        for(int i = 1; i <= n; i++){
            if(i%15 == 0){
                st[i-1] = fifteen;
            }
            else if(i%5 == 0){
                st[i-1] = five;
            }
            else if(i%3 == 0){
                st[i-1] = three;
            }
            else{
                st[i-1] = to_string(i);
            }
        }
        return st;
    }
};