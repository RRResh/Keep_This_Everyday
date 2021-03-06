//题目:二叉树的最大深度
//给定一个二叉树，找出其最大深度。
//二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
//递归
class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (root == NULL) return 0;//根结点为空则深度为0
		return max(maxDepth(root->right), maxDepth(root->left)) + 1;
		//树的深度为最深子树的深度+1(根节点)
	}
};