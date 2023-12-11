class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> co;
        for(int i=0;i<arr.size();i++)
           co[arr[i]]++;
        for(int i=0;i<arr.size();i++)
        {
            if(co[arr[i]]>arr.size()/4)
                return arr[i];
        }
        return -1;
    }
};