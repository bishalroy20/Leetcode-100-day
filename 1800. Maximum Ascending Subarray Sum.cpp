// link : https://leetcode.com/problems/maximum-ascending-subarray-sum/description/

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0],i=1,mx=nums[0],n=nums.size();
        while(i<n){
            
            if(nums[i-1] < nums[i]){
                sum += nums[i];
            }
            else{
                mx = max(mx, sum);
                sum = nums[i];
            }
            i++;
        }
        mx = max(mx,sum);
        return mx;

        
    }
};
