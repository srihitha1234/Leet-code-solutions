class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        long int start = 1;
        long int end = x;
        long int result = 0;

        while (start <= end) {
            long int mid = start + (end - start) / 2;
            
            if (mid * mid == x)
                return mid;
            else if (mid * mid < x) {
                start = mid + 1;
                result = mid;
            } else {
                end = mid - 1;
            }
        }

        return result;
    }
};
