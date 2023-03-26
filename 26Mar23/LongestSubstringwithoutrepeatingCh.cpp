//https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        queue<int> q;
        int count = 0;
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(mp.find(s[i]) == mp.end() || mp[s[i]] == 0){
                mp[s[i]]++;
                q.push(s[i]);
                count++;
            }
            else{
                ans = max(ans, count);
                while(q.front() != s[i]){
                    mp[q.front()]--;
                    q.pop();
                    count--;
                }
                q.pop();
                q.push(s[i]);
            }
        }
        ans = max(ans, count);
        return ans;
    }
};