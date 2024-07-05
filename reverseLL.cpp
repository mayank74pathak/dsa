 ListNode* reverseList(ListNode* head) {
        ListNode*front;
        ListNode*prev=NULL;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
   return prev;
    }
