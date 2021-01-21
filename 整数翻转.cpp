//给你一个 32 位的有符号整数 x ，返回 x 中每位上的数字反转后的结果。
//如果反转后整数超过 32 位的有符号整数的范围 [−231,  231 − 1] ，就返回 0。
//假设环境不允许存储 64 位整数（有符号或无符号）。
//数学题
class Solution {
public:
    int reverse(int x) {
        long num=0,flag=(x<0?-1:1);
        x=abs(x);
        while(x)
        {
            num=num*10+x%10;
            x/=10;
        }
        num=flag*num;
        return(num<-2147483648||num>2147483647?0:num);
    }
};