//给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。
class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        while(i<n)
        {
            int start=i;
            while(i<n&&s[i]!=' ') i++;
            int left=start,right=i-1;
            while(left<right)
            {
                s[left]^=s[right];
                s[right]^=s[left];
                s[left]^=s[right];
                left++;
                right--;
            }
            while(i<n&&s[i]==' ') i++;
        }
        return s;
    }
};