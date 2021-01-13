/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//编写程序以 x 为基准分割链表，使得所有小于 x 的节点排在大于或等于 x 的节点之前。如果链表中包含 x，x 只需出现在小于 x 的元素之后(如下所示)。分割元素 x 只需处于“右半部分”即可，其不需要被置于左右两部分之间。
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode*list1=new ListNode(0);
        ListNode*list2=new ListNode(0);
        ListNode*p1=list1,*p2=list2;
        ListNode*p=head;
        while(p!=NULL)
        {
            if(p->val<x){
                p1->next=p;
                p1=p1->next;
            }else{
                p2->next=p;
                p2=p2->next;
            }
            p=p->next;
        }
        p1->next=list2->next;
        p2->next=NULL;
        return list1->next;
        // ListNode* head1=new ListNode(0);
        // ListNode* head2=new ListNode(0);
        // ListNode* p1=head1,*p2=head2;
        // ListNode* p=head;
        // while(p){
        //     if(p->val<x){
        //         p1->next=p;
        //         p1=p1->next;
        //     }else{
        //         p2->next=p;
        //         p2=p2->next;
        //     }
        //     p=p->next;
        // }
        // if(head2) p1->next=head2->next;
        // p2->next=nullptr;
        // return head1->next;
    }
};