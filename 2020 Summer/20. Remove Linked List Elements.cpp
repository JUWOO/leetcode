//https://leetcode.com/problems/remove-linked-list-elements/
//TIme Complexity : O(n)
//Memory Complexity : O(1)
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p = head;
        ListNode* start;
        ListNode* q;
        if(head == NULL)
            return head;
        while(p != NULL)
        {
            start = head;
            if(head->val == val)
            {
                p = p->next;
                head = head->next;
                start->next = NULL;
            }
            else if(p->val == val)
            {
                q->next = p->next;
                p->next = NULL;
                p = q->next;
            }
            else if(p->next == NULL && p->val == val)
                q->next = NULL;
            else
            {
                q = p;
                p = p->next; 
            }
        }

        return head;
    }
};