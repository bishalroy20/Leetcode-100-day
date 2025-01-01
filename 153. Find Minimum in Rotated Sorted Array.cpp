https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        else if(nums[0] < nums[nums.size()-1]) return nums[0];

        else{
            // int ans = nums[0];
            int l = 0,r = nums.size()-1;
            while(l <= r){
                int mid = (l+r)/2;
                if(mid != 0 && nums[mid-1] > nums[mid]){
                    return nums[mid];
                }
                else if(mid != nums.size()-1 && nums[mid+1] < nums[mid]){
                    return nums[mid+1];
                }
                else if(nums[l] <= nums[mid]){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
        }
        }
        return -1;
    }
};
