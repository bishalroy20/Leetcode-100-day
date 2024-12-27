// link : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a = 0, b = numbers.size()-1;
        
        while(a < b){
            int sum = numbers[a] + numbers[b];
            if(sum == target){
                return {a+1,b+1};
            }
            else if(sum > target){
                b--;
            }
            else{
                a++;
            }
        }
        return {a+1,b+1};
    }
};
