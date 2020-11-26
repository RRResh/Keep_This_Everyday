//题目： 环形链表
//给定一个链表，判断链表中是否有环。
//直接定义快慢指针遍历 如果有环 迟早相遇
class Solution {
public:
	bool hasCycle(ListNode *head) {
		ListNode* fast = head;
		ListNode* slow = head;
		while (fast&&fast->next)//如果有NULL 即无环链表 就返回 false 
		{
			//这里尽量写成 while(true)
			//{
			//	if (fast == NULL || fast->next == NULL) return false; 把最下边那个false去掉 这样写比较好
			fast = fast->next->next;
			slow = slow->next;
			if (fast == slow) return true;
		}
		return false;
	}
};
//————————————————————————————————————————————————
//题目： 环形链表2
//给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null
;//在快慢指针第一次相遇的时候 把快指针的头指向链表头 这样等他们下一次相遇 就是链表入口
//如果理解不了就记住把
class Solution {
public:
	ListNode *detectCycle(ListNode *head) {
		ListNode* fast = head;
		ListNode* slow = head;
		while (true)
		{
			if (fast == NULL || fast->next == NULL) return NULL;
			fast = fast->next->next;
			slow = slow->next;
			if (fast == slow) break;
		}
		fast = head;//在快慢指针第一次相遇的时候 把快指针的头指向链表头 这样等他们下一次相遇 就是链表入口
		while (fast != slow)
		{
			fast = fast->next;
			slow = slow->next;
		}
		return fast;
	}
};