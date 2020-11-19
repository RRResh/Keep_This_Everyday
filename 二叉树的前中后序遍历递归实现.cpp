//题目：二叉树的前中后序遍历
//给定一个二叉树 返回他的遍历
//递归实现 
class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> ans;
		stack<TreeNode*> s;
		s.push(root);
		while (!s.empty()){
			TreeNode* r = s.top();
			s.pop();
			if (!r) continue;
			ans.push_back(r->val);
			s.push(r->right);
			s.push(r->left);
		}
		return ans;
	}
//中序 递归实现
	class Solution {
	public:
		void inorder(TreeNode* root, vector<int>& res) {
			if (!root) {
				return;
			}
			inorder(root->left, res);
			res.push_back(root->val);
			inorder(root->right, res);
		}
		vector<int> inorderTraversal(TreeNode* root) {
			vector<int> res;
			inorder(root, res);
			return res;
		}
	};

//后序 递归实现
	class Solution {
	public:
		void postorder(TreeNode *root, vector<int> &res) {
			if (root == nullptr) {
				return;
			}
			postorder(root->left, res);
			postorder(root->right, res);
			res.push_back(root->val);
		}

		vector<int> postorderTraversal(TreeNode *root) {
			vector<int> res;
			postorder(root, res);
			return res;
		}
	};