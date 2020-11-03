//题目：从尾到头打印链表 可以用栈 递归实现  
//cpp递归
class Solution {
public:
	vector<int> reversePrint(ListNode* head) {
		if (!head) return{};
		vector<int> res = reversePrint(head->next);
		res.push_back(head->val);
		return res;
	}
};
//c++新建直接逆置
class Solution {
public:
	vector<int> reversePrint(ListNode* head) {
		vector<int> res;
		ListNode* p = head;
		while (p)
		{
			res.push_back(p->val);
			p = p->next;
		}
		reverse(res.begin(), res.end());
		return res;
	}
};
//栈
class Solution {
public:
	vector<int> reversePrint(ListNode* head) {
		stack<int> s; //将数值压入栈
		while (head)
		{
			s.push(head->val);
			head = head->next;
		}
		vector<int> tmp;//将栈顶尾插入数组,并出栈,栈空跳出循环
		while (!s.empty())
		{
			tmp.push_back(s.top());
			s.pop();
		}
		return tmp;
	}
};