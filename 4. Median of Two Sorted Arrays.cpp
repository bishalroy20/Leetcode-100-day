//link : https://leetcode.com/problems/median-of-two-sorted-arrays/description/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,k=0;
        vector<int> v;
        while(i < nums1.size()){
            v.push_back(nums1[i]);
            i++;
        }
        while(j < nums2.size()){
            v.push_back(nums2[j]);
            j++;
        }
        sort(v.begin(),v.end());
        if(v.size() & 1){
            return double(v[v.size()/2]);
        }
        else{
            double ans = v[v.size()/2] + v[(v.size()/2)-1];
            return ans/2;
        }
    }
};
