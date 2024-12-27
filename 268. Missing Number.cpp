//link : https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x = nums.size();
        for(int i = 0;i<x;i++){
            if(i != nums[i]){
                return i;
            }
        }
        return x;
    }
};
