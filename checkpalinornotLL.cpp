ListNode*reversal(ListNode*dummy)
      {
          ListNode*prell=NULL;
          ListNode*nextll=NULL;
          while(dummy!=NULL)
          {
              nextll=dummy->next;
              dummy->next=prell;
              prell=dummy;
              dummy=nextll;
          }
      return prell;
      }
   
   
   
   
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL )
        {
        slow=slow->next;
        fast=fast->next->next;    
        
        }
       slow->next=reversal(slow->next);
      slow=slow->next;
while(slow!=NULL)
{
    if(head->val!=slow->val)
    {
        return false;
    }
    head=head->next;
    slow=slow->next;

}
      
return true;    
    }
