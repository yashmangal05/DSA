//https://leetcode.com/submissions/detail/921233001/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(begin(nums), end(nums));
        
        if(nums[nums.size()-1] == nums.size()-1) return nums.size();
        
        int start = 0;
        int end = nums.size()-1;
        while(start < end){
            
            int mid = (start+end)/2;
            cout << mid;
            if(nums[mid] == mid){
                start = mid + 1;
            }
            else{
                end = mid;
            }
        }
        return start;
    }
};