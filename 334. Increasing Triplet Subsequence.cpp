//link : https://leetcode.com/problems/increasing-triplet-subsequence/description/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int mn1 = INT_MAX , mn2 = INT_MAX;

        for(int n: nums){
             if( n <= mn1) mn1 = n;
             else if( n <= mn2) mn2 = n;
             else return true;
        }

        return false;
    }
};
