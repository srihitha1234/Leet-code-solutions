class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            if(count(arr.begin(),arr.end(),arr[i])>arr.size()/4)
                return arr[i];
        }
        return -1;
    }
};