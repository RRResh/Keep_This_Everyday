//给定一棵二叉搜索树，请找出其中第k大的节点。
class Solution {
public:
    int kthLargest(TreeNode* root, int k) {
        vector<int> arr;
        inorder(root,arr);
        return arr[arr.size()-k];
    }
    void inorder(TreeNode*root,vector<int>&arr)
    {
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
};