ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
        return NULL;
        
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL)
        {
           count++;
           temp=temp->next;
        }
      int k=count/2;
      temp=head;
       while(--k)
      {
        temp=temp->next;

      }
    temp->next=temp->next->next;
    return head;
    }
