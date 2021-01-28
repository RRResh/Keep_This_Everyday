//给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。（与按键电话相同）
class Solution {
    unordered_map<char,string> map={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
public:
    void DFS(string& digits,vector<string>& ret,string curstr,int idx)
    {
        if(digits.size()==idx)
        {
            ret.push_back(curstr);
            return;
        }
        string strmap=map[digits[idx]];
        for(char ch:strmap)
        {
            DFS(digits,ret,curstr+ch,idx+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> ret;
        DFS(digits,ret,"",0);
        return ret;
    }
};