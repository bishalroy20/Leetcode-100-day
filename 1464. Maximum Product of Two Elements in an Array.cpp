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



//or another solution

// int max = 0;
//       int smax = 0;

//       for(int i = 0; i < nums.length; i++){

//         if(max < nums[i]){
//             smax = max;
//             max = nums[i];
//         }
//         else if(smax < nums[i]){
//             smax = nums[i];
//         }
//       }  
//       int ans = (max - 1) * (smax - 1);

//       return ans;
