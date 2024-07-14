//link-https://www.youtube.com/watch?v=4OqQ4BMVn2M
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     ListNode*curr=headA;
     int a=0,b=0;
     while(curr!=NULL)
     {
        a++;
        curr=curr->next;
     }
     curr=headB;
     while(curr!=NULL)
     {
        b++;
        curr=curr->next;
     }
   int   diff=abs(a-b);
     if(a>b)
     {
        while(diff--)
        {
            headA=headA->next;

        }
     }
     else{
        while(diff--){
            headB=headB->next;
        }
     }
    while(headA and headB)
    {
        if(headA ==headB)
        {
            return headA;
        }
        headA=headA->next;
        headB=headB->next;
    
    }
    
    return NULL;
    }
