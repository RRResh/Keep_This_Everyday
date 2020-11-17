class Solution {
public:
//给定一个二叉树，检查它是否是镜像对称的。
    bool isSymmetric(TreeNode* root) {
        TreeNode*p=root->left;
        TreeNode*q=root->right;
        if(!p&&!q) return true;
        if(!p||!q) return false;
        return p->val==q->val&&isSymmetric(root->right,root->left)&&isSymmetric(root->left,root->right);
    }
};