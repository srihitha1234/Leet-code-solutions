class Solution {
public:
    void swap(string &a,string &b)
    {
        string c=a;
        a=b;
        b=c;
    }
    string addBinary(string a, string b) {
        char carry='0',sum=0;
        int tempa=a.size()-1,tempb=b.size()-1;
        string result="";
        if(tempa<tempb)
            swap(a,b);
        tempa=a.size()-1;
        tempb=b.size()-1;
        for(int i=tempa;i>=0;i--)
        {
            if(tempb>=0)
            {
                if(carry==a[i] && a[i]==b[tempb])
                {
                    sum=a[i];
                    carry=a[i];
                }
                else if((carry=='0' && a[i]=='1' && b[tempb]=='1') || (carry=='1' && (a[i]=='1' || b[tempb]=='1')))
                {
                    sum='0';
                    carry='1';
                }
                else if((carry=='1' && a[i]=='0' && b[tempb]=='0') || (carry=='0' && (a[i]=='1' || b[tempb]=='1')))
                {
                    sum='1';
                    carry='0';
                }
                tempb--;
            }
            else
            {
                if(a[i]==carry)
                {
                    sum='0';
                    carry=a[i];
                }
                else
                {
                    sum='1';
                    carry='0';
                }
            }
            result=sum+result;
        }
        if(carry!='0')
             result=carry+result;
         return result;
    }
};