//给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--)
        {
            digits[i]++;
            if(digits[i]==10) digits[i]=0;
            else return digits;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};