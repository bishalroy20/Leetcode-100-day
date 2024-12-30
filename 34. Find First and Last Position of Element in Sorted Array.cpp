//link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int> ans = {-1,-1};

         if(nums.size() == 0) return ans;

         ans[0] = fsearch(nums,target);
         ans[1] = ssearch(nums,target);

         return ans;
    }

    int fsearch(vector<int>& nums, int target){
        int n = nums.size();
        int i=0,j=n-1,ans=-1;
        while(i <= j){
            int mid = (i+j)/2;
            if(nums[mid] == target){
                ans = mid;
                j -= 1;
            }
            else if(nums[mid] < target){
                i += 1;
            }
            else{
                j -= 1;
            }
        }
        return ans;
    }

    int ssearch(vector<int> &nums, int target){
        int n = nums.size();
        int i=0,j=n-1,ans=-1;
        while(i <= j){
            int mid = (i+j)/2;
            if(nums[mid] == target){
                ans = mid;
                i += 1;
            }
            else if(nums[mid] < target){
                i += 1;
            }
            else{
                j -= 1;
            }
        }
        return ans;
    }
};
