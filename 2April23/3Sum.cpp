//https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(begin(nums), end(nums));
        
        vector<vector<int>> ans;
        if(nums.size() < 3) return ans;
        
        for(int i = 0; i < nums.size()-2; i++){
            if(i == 0 || (i > 0 && nums[i] != nums[i-1])){
                int lo = i+1, hi = nums.size()-1, sum = 0 - nums[i];
                
                while(lo < hi){
                    if(nums[lo] + nums[hi] == sum){
                        ans.push_back({nums[i], nums[hi], nums[lo]});
                        while(lo < hi && nums[lo] == nums[lo+1]) lo++;
                        while(lo < hi && nums[hi] == nums[hi-1]) hi--;
                        
                        lo++;hi--;
                    }
                    else if(nums[lo] + nums[hi] < sum) lo++;
                    else hi--;
                }
            }
        }
        return ans;
    }
};