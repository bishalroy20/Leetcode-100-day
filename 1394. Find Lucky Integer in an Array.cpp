// https://leetcode.com/problems/find-lucky-integer-in-an-array/description/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(int i : arr){
            mp[i]++;
        }
        
    //     vector<pair<int, int>> vec(mp.begin(), mp.end());

    // sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    //     return a.second < b.second; 
    // });
        int result = -1;
        for(auto [i,j] : mp){
            if(i == j){
                result = max(result, i); 
            }
        }
        return result;
    }
};
