class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int candidate = arr[0];
        int count = 1;
        int n = arr.size();

        for (int i = 1; i < n; i++) {
            if (arr[i] == candidate) {
                count++;
                if (count > n / 4) {
                    return candidate;
                }
            } else {
                candidate = arr[i];
                count = 1;
            }
        }

        return arr[0];
    }
};
