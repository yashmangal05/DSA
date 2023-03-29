//https://leetcode.com/submissions/detail/923514383/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int k = nums.size()-1;
        
        while(j <= k){
            if(nums[j] == 0){
                swap(nums[j++], nums[i++]);
            }
            else if(nums[j] == 2){
                swap(nums[j], nums[k--]);
            }
            else{
                j++;
            }
        }
    }
};