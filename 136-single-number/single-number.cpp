class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       int ans=0;
	   for(auto x:nums)
       {
           cout<<ans;
            ans^=x;
       }
	   return ans;
    }
};