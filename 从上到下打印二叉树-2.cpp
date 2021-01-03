//从上到下按层打印二叉树，同一层的节点按从左到右的顺序打印，每一层打印到一行。
//BFS
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>> res;
        queue<TreeNode*> bfs;
        bfs.push(root);
        while(!bfs.empty())
        {
            vector<int>level;
            int count=bfs.size();
            while(count--)
            {
                level.push_back(bfs.front()->val);
                TreeNode*tmp=bfs.front();
                bfs.pop();
                if(tmp->left) bfs.push(tmp->left);
                if(tmp->right) bfs.push(tmp->right); 
            }
            res.push_back(level);
        }
        return res;
    }
};