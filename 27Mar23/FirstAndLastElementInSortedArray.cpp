//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    int first(vector<int>& nums, int target){
        int ans;
        int index = -1;
        int s = 0;
        int e = nums.size()-1;
        
        while(s <= e){
            int mid = (s+e)/2;
            if(nums[mid] < target){
                s = mid + 1;
            }
            else if(nums[mid] > target){
                e = mid -1;
            }
            else{
                index = mid;
                e = mid-1;
            }
        }
        return index;
    }
    int last(vector<int>& nums, int target){
        int ans;
        int index = -1;
        int s = 0;
        int e = nums.size()-1;
        
        while(s <= e){
            int mid = (s+e)/2;
            if(nums[mid] < target){
                s = mid + 1;
            }
            else if(nums[mid] > target){
                e = mid -1;
            }
            else{
                index = mid;
                s = mid+1;
            }
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first(nums, target));
        ans.push_back(last(nums, target));
        return ans;
    }
};