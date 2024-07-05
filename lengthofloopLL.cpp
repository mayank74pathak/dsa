int countNodesinLoop(struct Node *head)
{
    // Code here
Node*entry=head;
Node*slow=head;
Node*fast=head;
 
int cnt=0;
while(fast!=NULL and fast->next!=NULL)
{
    fast=fast->next->next;
    slow=slow->next;
    
    if(fast==slow)
    {
        fast=fast->next;
        int cnt=1;
        while(fast!=slow)
        {
             fast=fast->next;
        
            cnt++;
        }
    
         return cnt;
    }
