//输入一个英文句子，翻转句子中单词的顺序，但单词内字符的顺序不变。为简单起见，标点符号和普通字母一样处理。例如输入字符串"I am a student. "，则输出"student. a am I"。
class Solution {
public:
    string reverseWords(string s) {
        int len=s.length();
        if(len==0) return "";
        string res="";
        int j=len-1;
        while(j>=0)
        {
            if(s[j]==' ')
            {
                j--;
                continue;
            }
            while(j>=0&&s[j]!=' ')
            {
                j--;
            }
            int pos=j;
            j++;
            while(s[j]!=' '&&j<len)
            {
                res+=s[j];
                j++;
            }
            j=pos;
            res+=' ';
        }
        if(res[res.length()-1]==' ')
        {
            res.erase(res.length()-1,1);
        }
        return res;
    }
};
