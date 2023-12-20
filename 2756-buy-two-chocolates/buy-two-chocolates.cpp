#include <vector>
#include <algorithm>

class Solution {
public:
    int buyChoco(std::vector<int>& nums, int money) {
        if (nums.size() < 2) 
            return money;
        sort(nums.begin(), nums.end());
        if(money-nums[0]-nums[1]<0)
            return money;
        return money-nums[0]-nums[1];
    }
};
