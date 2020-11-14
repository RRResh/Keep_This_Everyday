class Solution {
public:
	ListNode* removeElements(ListNode* head, int val)
	{
		ListNode*newhead = new ListNode(0);
		//为什么定义一个newhead而不是直接p1指向head 
		//因为最后需要返回一个head p1不断在变化 需要一个不变化的量去返回
		newhead->next = head;
		ListNode*p1 = newhead;
		ListNode*p2 = head;
		ListNode*todelete = nullptr;
		while (p2 != nullptr)
		{
			if (p2->val == val)
			{
				p1->next = p2->next;
				todelete = p2;
			}
			else p1 = p2;
			p2 = p2->next;
			//为什么这里要定义todelete 
			//因为不能直接把p2delete掉 p2还需要进入next 所以要传给todelete
			if (todelete != nullptr)
			{
				delete todelete;
				todelete = nullptr;
			}
		}
		ListNode*ret = newhead->next;
		return ret;
	}
	ListNode* removeElements2(ListNode* head, int val)//递归实现
	{
		//不太好理解的话就看第三个递归吧比较好理解
		if (head = nullptr)
			return head;
		ListNode*p = removeElements2(head->next, val);
		if (head->val == val)
			return p;
		else
		{
			head->next = p;
			return head;
		}
	}
	//刷题来看递归都要加个判断条件比如 if head==null或者head->next==null 则return head
	//而普通实现则一般不需要
	ListNode* removeElements3(ListNode* head, int val)//递归实现 进一步优化版本
	{
		if (head == nullptr)
			return head;
		head->next = removeElements3(head->next, val);
		return head->val == val ? head->next : head;//如果值等于val 则 直接返回head->next 否则还返回head
	}
};