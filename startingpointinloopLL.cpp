ListNode *detectCycle(ListNode *head) {
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*entry=head; 
        
       if(head==NULL or head->next==NULL)
       return NULL;
        
        
        
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
             slow =slow->next;
             fast=fast->next->next;
            
            
            if(slow==fast)
            {
                while(slow!=entry)
        {
          
          entry=entry->next;
          slow=slow->next;
        }
               return entry;
        
            
            }
         
           
        }
    

return NULL;
    }
