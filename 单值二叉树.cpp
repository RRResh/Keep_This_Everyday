class Solution {
public:
    //如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树
    //set自动去重
    set<int> tree;
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL) return true;
        tree.insert(root->val);//遍历插入set
        isUnivalTree(root->left);
        isUnivalTree(root->right);
        if(tree.size()>1)
        return false;
        else
        return true;
    }
};