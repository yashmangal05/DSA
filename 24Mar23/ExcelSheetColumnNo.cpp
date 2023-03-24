//https://leetcode.com/submissions/detail/921326567/
class Solution {
public:
    int titleToNumber(string columnTitle) {
        // columnTitle = columnTitle.toLowerCase();
        cout << columnTitle[0];
        // if(columnTitle.length() == 1) return (columnTitle[0] - 'A' + 1);
        int ans = 0;
        int count = 0;
        for(int i = columnTitle.length()-1; i >= 0; i--){
            ans += (columnTitle[i] - 'A' + 1)*pow(26, count);
            count++;
        }
        return ans;
    }
};