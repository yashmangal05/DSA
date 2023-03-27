//https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(begin(intervals), end(intervals));
        
        vector<vector<int> > ans;
        
        if(intervals.size() == 0) return ans;
        
        int start = intervals[0][1];
        
        ans.push_back(intervals[0]);
        
        for(int i = 1; i < intervals.size(); i++){
            if(start >= intervals[i][0]){
                ans[ans.size()-1][1] = max(ans[ans.size()-1][1], intervals[i][1]);
                start = ans[ans.size()-1][1];
            }
            else{
                ans.push_back(intervals[i]);
                start = ans[ans.size()-1][1];
            }
        }
        return ans;
    }
};