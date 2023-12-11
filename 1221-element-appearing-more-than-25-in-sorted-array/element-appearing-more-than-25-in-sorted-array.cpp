class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> co;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            co[arr[i]]++;
            if (co[arr[i]] > n / 4) {
                return arr[i];
            }
        }
        
        return -1;
    }
};
