class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.size();
        int n=t.size();
        if(m!=n)
            return false;
        unordered_map<char,int> visited(26);
        for(int i=0;i<m;i++)
            visited[s[i]]++;
        for(int i=0;i<m;i++)
        {
            visited[t[i]]--;
        }
        for(int i=0;i<m;i++)
        {
            if(visited[s[i]]!=0)
                return false;
        }
        return true;
    }
};