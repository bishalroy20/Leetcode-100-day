//link : https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx=0,sm=0,mxidx;

        for(int i=0;i<nums.size();i++){
            if(mx < nums[i]){
                sm = mx;
                mx = nums[i];
                mxidx = i;
            }
            else if(sm < nums[i]){
                sm = nums[i];
            }
        }

        if(sm*2 > mx){
            return -1;
        }
        else{
            return mxidx;
        }
    }
};
