//https://leetcode.com/submissions/detail/921236206/
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(begin(s), end(s));
        sort(begin(t), end(t));
        // if(s.length() != t.length()) return false;
        return s == t;
    }
};