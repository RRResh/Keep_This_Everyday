class Solution {
public:
    void DFS(vector<int>& candidates,int target,vector<vector<int>>& ret,vector<int>&combine,int idx)
    {
        if(idx==candidates.size()) return;
        if(target==0)
        {
            ret.push_back(combine);
            return;
        }
        DFS(candidates,target,ret,combine,idx+1);
        if(target-candidates[idx]>=0)
        {
            combine.push_back(candidates[idx]);
            DFS(candidates,target-candidates[idx],ret,combine,idx);
            combine.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ret;
        vector<int> combine;
        DFS(candidates,target,ret,combine,0);
        return ret;
    }
};