
//link : https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string a = s;
        reverse(s.begin(),s.end());

        if(s == a){
            return true;
        }
        else{
            return false;
        }
    }
};
