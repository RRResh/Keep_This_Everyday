//给定一个字符串 s 和一个整数 k，你需要对从字符串开头算起的每隔 2k 个字符的前 k 个字符进行反转。
class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.size();i+=2*k)
        {
            if(i+k<=s.size())
            {
                reverse(s.begin()+i,s.begin()+i+k);
                continue;
            }
            reverse(s.begin()+i,s.end());
        }
        return s;
    }
};