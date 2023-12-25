class Solution {
public:
    int reverse(long int x) {
        long int rev=0;
        bool neg=x<0;
        if(neg)
            x=0-x;
        while(x>0)
        {
            int rem=x%10;
            rev=rev*10+rem;
            x=x/10;
            if(rev>pow(2,31)-1)
                return 0;
        }
        if(rev>pow(2,31)-1)
                return 0;
        if(neg)
            rev=0-rev;
        return rev;

    }
};