//link : https://leetcode.com/problems/bulb-switcher/description/

class Solution {
public:
    int bulbSwitch(int n) {
        if(n == 0) return 0;
        int i = 1;

        while((i*i) <= n){
            i++;
        }
        return i-1;

    }
};
