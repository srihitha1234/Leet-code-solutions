class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> res;
        int n=nums.size();
        for(int i=0;i<n;i++)
            res[nums[i]]++;
        for(int i=0;i<n;i++)
        {
            int maj=n/2;
            maj++;
            if(res[nums[i]]>=maj)
                return nums[i];
        }
        return -1;
    }
};