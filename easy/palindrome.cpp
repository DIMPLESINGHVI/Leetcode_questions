class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return 0;

    int num = x;
        int rev=0;
        int r=0;
        while(num>0){
            r = num%10;
           
            if (rev > (INT_MAX - r) / 10)  // to check the overflow
                return false;
             rev = rev*10 + r;
            num/=10;
        }

        if(rev==x)
        return 1;

        else return 0;
    }
};
