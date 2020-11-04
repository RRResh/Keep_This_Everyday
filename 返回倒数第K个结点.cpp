//题目：返回链表中倒数K个节点
class Solution {
public:
	ListNode* getKthFromEnd(ListNode* head, int k) {
//快慢指针实现 快指针先走k个 然后快指针走完之后慢指针就是倒数K个
		if (head == NULL)
			return head;
		ListNode*fast = head;
		ListNode*slow = head;
		for (int i = 0; i<k; i++)
		{
			fast = fast->next;
		}
		while (fast != NULL)
		{
			fast = fast->next;
			slow = slow->next;
		}
		return slow;
	}
};