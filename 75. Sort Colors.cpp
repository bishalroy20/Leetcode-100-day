// link : https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }

        nums.clear();
        int n = mp[0];
        for(int i=0;i<n;i++){
            nums.push_back(0);
        }
        int m = mp[1];
        for(int i=0;i<m;i++){
            nums.push_back(1);
        }
        int o = mp[2];
        for(int i=0;i<o;i++){
            nums.push_back(2);
        }
    }
};
