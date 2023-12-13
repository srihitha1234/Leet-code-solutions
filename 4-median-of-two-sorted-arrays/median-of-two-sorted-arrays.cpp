class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int m=nums1.size();
        int n=nums2.size();
        for(int i=0;i<m;i++)
            nums.push_back(nums1[i]);
        for(int i=0;i<n;i++)
            nums.push_back(nums2[i]);
        sort(nums.begin(),nums.end());
        int a=nums.size()/2;
        if(nums.size()%2==0)
        {
            a=a-1;
            int b=a+1;
            return (float(nums[a]+nums[b])/2);            
        }
        return nums[a];
    }
};