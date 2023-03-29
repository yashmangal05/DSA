//https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    int isPalindrome(string &s, int start, int end){
        string odd = "";
        if(start < 0 || end > s.length()-1){
            return 0;
        }
        while((start >= 0 && end < s.length()) && (s[start] == s[end])){
            start--;
            end++;
        }
        return end - start - 1;
    }
    string longestPalindrome(string s) {
        if(s.length() == 0) return s;
        
        string maxPalindrome = "";
        maxPalindrome.push_back(s[0]);
        
        for(int i = 0; i < s.length(); i++){
            int odd = isPalindrome(s, i-1, i+1);
            int even = isPalindrome(s, i-1, i);
            
            int ans = max(odd, even);
            cout << ans << " ";
            string a = "";
            
            for(int j = i - ans/2; j < ans; j++){
                a.push_back(s[j]);
            }
            
            maxPalindrome = maxPalindrome.length() > a.length() ? maxPalindrome : a;
        }
        return maxPalindrome;
    }
};