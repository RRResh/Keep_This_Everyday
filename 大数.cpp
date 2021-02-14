class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 计算两个数之和
     * @param s string字符串 表示第一个整数
     * @param t string字符串 表示第二个整数
     * @return string字符串
     */
    string solve(string s, string t) {
        
        int max_length = s.length() > t.length() ? s.length() + 1 : t.length() + 1;        
        string temp_zero1(max_length - s.length(), '0');
        s = temp_zero1 + s;   //对s补0操作
        string temp_zero2(max_length - t.length(), '0');
        t = temp_zero2 + t;    //对t补0操作

        string ans;
        char temp_num[2];
        temp_num[1] = '\0';
        for (int i = s.length() - 1; i >= 0; i--) //从最末一位开始往前加
        {
            if ((s[i] - '0') + (t[i] - '0') >= 10) //有进位
            {
                s[i - 1] = s[i - 1] + 1; // 进一位
                temp_num[0] = '0' + ((s[i] - '0') + (t[i] - '0') - 10);
                ans.insert(0, temp_num);
            }
            else //无进位
            {
                temp_num[0] = '0' + (s[i] - '0') + (t[i] - '0');
                ans.insert(0, temp_num);
            }
        }

        if (ans[0] == '0')
            ans = ans.erase(0, 1);
        return ans;
    }
};