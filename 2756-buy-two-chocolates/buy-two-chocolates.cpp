class Solution {
public:
    int buyChoco(vector<int>& nums, int money) {
        int min1,min2;
        if(nums[0]>nums[1])
        {
            min1=nums[1];
            min2=nums[0];
        }
        else
        {
            min1=nums[0];
            min2=nums[1];
        }
        for(int i=2;i<nums.size();i++)
        {
            if(min1>nums[i])
            {
                min2=min1;
                min1=nums[i];
            }
            else if(min2>nums[i])
                min2=nums[i];
        }
        if(money-min1-min2<0)
            return money;
        return money-min1-min2;
    }
};