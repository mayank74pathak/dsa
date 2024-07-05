ListNode* middleNode(ListNode* head) {
        ListNode*p=head;
        ListNode*q=head;
        while(q != NULL and q->next!=NULL)
        {
          q=q->next->next;
          p=p->next;  
        }
        return p;
    }
//slow and fast method
