class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        char a='A';
        while(columnNumber>0)
        {
            cout<<columnNumber<<" ";
            int n=columnNumber%26;
            cout<<n<<" "<<endl;
            char m;
            if(n==0)
                m='Z';
            else
                m=a+n-1;
            res=m+res;
            if(columnNumber==26)
                break;
            if(n==0)
                columnNumber--;
            columnNumber/=26;
        }
        return res;
    }
};