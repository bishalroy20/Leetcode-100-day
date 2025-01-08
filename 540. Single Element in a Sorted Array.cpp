//link : https://leetcode.com/problems/single-element-in-a-sorted-array/description/


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    
        int l = 0, r = nums.size() - 1;

        while (l < r) { 
            int mid = l + (r - l) / 2; 
            if (mid % 2 == 1) {
                mid--; 
            }

            if (nums[mid] == nums[mid + 1]) {
                l = mid + 2;
            } 
            else {
                r = mid;
            }
        }

        return nums[l];
        }
};
