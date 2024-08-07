Node* constructLL(vector<int>& arr) {
        // code here
     if(arr.size()==0)
     return NULL;
     
     Node*head= new Node(arr[0]);
     Node*temp=head;
    
    int n=arr.size();
    int i=1;
    while(i<n)
    {
      Node*newNode=new Node(arr[i]);
      temp->next=newNode;
      
      temp=newNode;
    i++;
        
    }
    return head;  
    }
