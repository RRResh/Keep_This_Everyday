//题目：两两交换链表中的结点
//递归
	class Solution {
	public:
		//递归
		//用 head 表示原始链表的头节点，新的链表的第二个节点，用 newHead 表示新的链表的头节点.原始链表的第二个节点
		//则原始链表中的其余节点的头节点是 newHead.next。
		//令 head.next = swapPairs(newHead.next)，表示将其余节点进行两两交换，交换后的新的头节点为 head 的下一个节点。
		//然后令 newHead.next = head，即完成了所有节点的交换。最后返回新的链表的头节点 newHead。
		ListNode* swapPairs(ListNode* head) {
			if (head == NULL || head->next == NULL) return head;
			ListNode* newhead = head->next;
			head->next = swapPairs(newhead->next);
			newhead->next = head;
			return newhead;
		}
	};