//link : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                v.push_back((nums[i]-1)*(nums[j]-1));
            }
        }
        int mx = *max_element(v.begin(),v.end());
        return mx;
    }
};
