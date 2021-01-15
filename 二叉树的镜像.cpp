//请完成一个函数，输入一个二叉树，该函数输出它的镜像
//递归
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* mirrorTree(TreeNode* root) {
        if(!root) return NULL;
        mirrorTree(root->left);
        mirrorTree(root->right);
        swap(root->left,root->right);
        return root;
    }
};