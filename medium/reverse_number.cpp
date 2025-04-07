class Solution {
public:
    int reverse(int x) {
        unsigned int num = (x < 0) ? -static_cast<unsigned int>(x) : x; // this is the change in logic to pass all test cases 
        int rev = 0;
        //num = abs(num);

        while (num > 0) {
            int r = num % 10;
            if (rev< INT_MIN / 10 || rev > INT_MAX / 10)
            return 0;

            rev = rev * 10 + r;
            num = num / 10;
        }

        if (x < 0)
            rev = rev * -1;

        return rev;
    }
};
