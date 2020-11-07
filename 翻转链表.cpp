//题目：翻转链表
//定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode*p1 = NULL;//要将p1设为尾 所以p1要为空
		ListNode*p2 = head;
		while (p2 != NULL)
		{
			ListNode*t = p2->next;//这里要定义一个t来存p2->next以便让p2继续往后走
			p2->next = p1;//将p2指向p1
			p1 = p2;//让P1往后走
			p2 = t;//让p2往后走
		}
		return p1;
	}
	ListNode* reverseList2(ListNode* head) {//递归实现 非常之爽
		if (head == NULL || head->next == NULL)
			return head;
		ListNode* ret = reverseList(head->next);
		head->next->next = head;//让下一个的next指针指向当前节点
		head->next = NULL;//把当前节点设成尾 既NULL  实现逆转操作
		//递归我的理解 第一层就是最后一次执行的最底层 
		return ret;
	}
};