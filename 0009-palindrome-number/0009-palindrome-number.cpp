class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int rev = 0;
        while(x>0){
            int ld = x%10;
            if(rev>(INT_MAX - ld) / 10){return false;}
            rev = rev*10+ld;
            x = x/10;
        }
        return rev == temp;
    }
};