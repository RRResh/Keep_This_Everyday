//字符串的排列
class Solution {
public:
    void dfs(string& s,vector<string>& res,int idx)
    {
        if(idx>=s.size()-1)
        {
            res.push_back(s);
            return;
        }
        unordered_set<char> set;
        for(int i=idx;i<s.size();i++)
        {
            if(set.find(s[i])!=set.end()) continue;
            set.insert(s[i]);
            swap(s[i],s[idx]);
            dfs(s,res,idx+1);
            swap(s[i],s[idx]);
        }
    }
    vector<string> permutation(string s) {
        vector<string>res;
        dfs(s,res,0);
        return res;
    }
};