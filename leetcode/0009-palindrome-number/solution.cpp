class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return 0;
        int store = x;
        long long rev = 0;
        while(x){
            int unit = x%10;
            rev = rev*10 + unit;
            x /= 10;
        }

        if(rev == store) return 1;
        return 0;
    }
};