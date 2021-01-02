//从上到下打印出二叉树的每个节点，同一层的节点按照从左到右的顺序打印。
//bfs
class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        if(!root) return{};
        vector<int> arr;
        queue<TreeNode*> BFS;
        BFS.push(root);
        while(!BFS.empty())
        {
            TreeNode*tmp=BFS.front();
            arr.push_back(BFS.front()->val);
            BFS.pop();
            if(tmp->left) BFS.push(tmp->left);
            if(tmp->right) BFS.push(tmp->right);
        } 
        return arr;
    }
};