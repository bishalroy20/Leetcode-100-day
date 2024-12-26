//link : https://leetcode.com/problems/add-to-array-form-of-integer/

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        vector<int> result;
        int carry = 0;

        for (int i = n - 1; i >= 0 || k > 0 || carry > 0; i--) {
            int digit = (i >= 0 ? num[i] : 0); 
            int sum = digit + (k % 10) + carry; 
            result.push_back(sum % 10); 
            carry = sum / 10; 
            k /= 10; 
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
