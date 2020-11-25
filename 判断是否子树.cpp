//题目：另一颗树的子树
//给定树s与t 判断t是否为s的子树结构
//递归实现
	class Solution {
	public:
		bool equal(TreeNode* s, TreeNode* t)
		{//判断两个树是否相等
			if (s == nullptr&&t == nullptr) return true;
			else if ((s == nullptr&&t != nullptr) || (s != nullptr&&t == nullptr)) return false;
			else if (s->val == t->val) return equal(s->left, t->left) && equal(s->right, t->right);
			else return false;
		}
		bool isSubtree(TreeNode* s, TreeNode* t) {
			//注意这里也需要加一些判断条件 不可直接return最后一句
			//否则会出现一些空指针的访问问题 因为有的测试用例是空树
			if (s == nullptr&&t == nullptr) return true;
			else if ((s == nullptr&&t != nullptr) || (s != nullptr&&t == nullptr)) return false;
			else return equal(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
		}
	};