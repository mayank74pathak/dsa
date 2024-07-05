ListNode* oddEvenList(ListNode* head) {
    
     if(head==NULL or head->next==NULL or head->next->next==NULL)
     {
        return head;
     }   
     ListNode*even=head->next;
     ListNode*odd=head;
     ListNode*evenhead=head->next;
     while(odd->next!=NULL and odd->next->next!=NULL)
     {
      odd->next=odd->next->next;
      odd=odd->next;
      even->next=even->next->next;
      even=even->next; 
     } 
odd->next=evenhead;
return head;
    }
//video for ref - https://youtu.be/WoUAs7R3Ao4?si=TeZDRbjrXpWTsgTi
