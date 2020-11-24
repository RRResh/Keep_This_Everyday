//题目：平衡二叉树
//给定一个二叉树，判断它是否是高度平衡的二叉树。
//平衡的二叉树：一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1 
	//首先计算左右子树的高度
	class Solution {
	public:
		//自顶向下递归 对于同一个节点，函数height会被重复调用，导致时间复杂度较高，为O（n^2）
		int Height(TreeNode* root)
		{
			if (root == nullptr) return 0;
			//本树高度等于左右子树最大高度+本树的根 即1
			else return max(Height(root->left), Height(root->right)) + 1;
		}
		bool isBalanced(TreeNode* root) {
			if (root == nullptr) return true;
			//左右子树高度差绝对值不超过1 接下里再递归判断左右子树是否为平衡二叉树
			else return abs(Height(root->left) - Height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
		}
	};
	class Solution{
	public:
		//优化后的递归解法 从下到顶遍历 时间复杂度O(N)
		//先递归地判断其左右子树是否平衡
		int Height(TreeNode* root)
		{
			if (root == nullptr) return 0;
			int leftheight = Height(root->left);
			int rightheight = Height(root->right);
			if (leftheight == -1 || rightheight == -1 || abs(leftheight - rightheight)>1) return -1;
			else return max(Height(root->left), Height(root->right)) + 1;
		}
		bool isBalanced(TreeNode* root)
		{
			return Height(root) >= 0;
		}
	};