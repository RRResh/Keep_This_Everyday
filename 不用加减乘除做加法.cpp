//不用加减乘除做加法
//位运算
class Solution {
public:
    int add(int a, int b) {
        if(a==0||b==0) return a==0?b:a;
        int sum=0,carry=0;
        while(b!=0)
        {
            sum=a^b;
            carry=(unsigned int)(a&b)<<1;
            a=sum;
            b=carry;
        }
        return a;
    }
};