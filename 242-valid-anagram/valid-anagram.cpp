class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,int> visited(26);
        for(int i=0;i<s.size();i++)
        {
            visited[s[i]]++;
             visited[t[i]]--;
        }
        for(int i=0;i<s.size();i++)
        {
            if(visited[s[i]]!=0)
                return false;
        }
        return true;
    }
};