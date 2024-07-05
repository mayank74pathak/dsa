bool hasCycle(ListNode *head) {
          if(head==NULL or head->next==NULL)
        return false;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)    
         return true;
        }  
          return false;
    }
