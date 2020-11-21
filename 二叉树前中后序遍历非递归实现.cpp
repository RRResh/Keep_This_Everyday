class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {

		vector<int> res;
		stack<TreeNode*> s;
		TreeNode* p = root;

		while (!s.empty() || p){
			if (p){
				res.push_back(p->val);
				s.push(p);
				p = p->left;
			}
			else {
				p = s.top();
				s.pop();
				p = p->right;
			}
		}

		return res;
	}
};
//中序
class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {

		vector<int> res;
		stack<TreeNode*> s;
		TreeNode* p = root;

		while (!s.empty() || p){
			if (p){
				s.push(p);
				p = p->left;
			}
			else{
				p = s.top();
				s.pop();
				res.push_back(p->val);
				p = p->right;
			}
		}

		return res;
	}
};
//后序
class Solution {
public:
	vector<int> postorderTraversal(TreeNode* root) {

		vector<int> res;
		stack<TreeNode*> s;
		TreeNode* p = root;
		TreeNode* r = nullptr;

		while (!s.empty() || p){
			if (p){
				s.push(p);
				p = p->left;
			}
			else{
				p = s.top();
				if (p->right == nullptr || p->right == r){
					res.push_back(p->val);
					s.pop();
					r = p;
					p = nullptr;
				}
				else
					p = p->right;
			}
		}
		return res;
	}
};