class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1)
            return 1;
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            string dummy;
            dummy+=s[i];
            for(int j=i+1;j<s.size()+1;j++)
            {
                 if(res<dummy.size())
                        res=dummy.size();
                if(count(dummy.begin(),dummy.end(),s[j])>=1)
                   break;
                dummy+=s[j];
            }
            dummy.clear();
        }
        return res;
    }
};