class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() <= 1)
            return s.size();

        int res = 0;
        for(int i = 0; i < s.size(); ++i) {
            unordered_set<char> charSet;
            int j = i;
            while(j < s.size() && charSet.count(s[j]) == 0) {
                charSet.insert(s[j]);
                ++j;
            }
            res = max(res, j - i);
        }
        return res;
    }
};
