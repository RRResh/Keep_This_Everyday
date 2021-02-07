class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(!strs.size()) return "";
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            prefix=longestCommonPrefix(prefix,strs[i]);
            if(!prefix.size()) break;
        }
        return prefix;
    }
    string longestCommonPrefix(string& str1,string& str2)
    {
        int index=0;
        int length=min(str1.size(),str2.size());
        while(index<length&&str1[index]==str2[index])
        {
            index++;
        }
        return str1.substr(0,index);
    }
};