//合并K个升序链表
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return nullptr;
        ListNode*head=lists[0];
        for(int i=1;i<lists.size();i++)
        {
            if(lists[i]) head=mergetwolists(head,lists[i]);
        }
        return head;
    }
    ListNode* mergetwolists(ListNode* l1,ListNode* l2)
    {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode*newlist=new ListNode(0);
        ListNode*head=newlist;
        while(l1&&l2)
        {
            if(l1->val<=l2->val)
            {
                head->next=l1;
                l1=l1->next;
            }
            else 
            {
                head->next=l2;
                l2=l2->next;
            }
            head=head->next;
        }
        head->next=l1==NULL?l2:l1;
        return newlist->next;
    }
};