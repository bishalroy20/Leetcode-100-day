//link : https://leetcode.com/problems/power-of-two/description/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // return x && !(x & (x-1));
        if(n <= 0) return false;
        else if((n & (n-1)) == 0) return true;
        else return false; 
    }
};
