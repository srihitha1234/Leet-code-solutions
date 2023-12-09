class Solution {
public: 
    vector<int> plusOne(vector<int>& digits) {
        int temp=digits.size()-1;
        for(int i=temp;i>=0;i--)
        {
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
            if(i==0)
               digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};