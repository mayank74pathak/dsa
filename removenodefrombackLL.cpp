ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL and n==1)
          return NULL;
        if(head==NULL)
          return head;
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL)
        {
           count++;
           temp=temp->next;
        }
      int k=count-n;
      temp=head;
      if(k==0)
     return  head=head->next;
      while(--k)
      {
        temp=temp->next;

      }
    temp->next=temp->next->next;
    return head;
    }
