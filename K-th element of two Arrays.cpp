 int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
    int n1=arr1.size();
    int n2=arr2.size();
    int i=0,j=0;
    
    int count=1;
    int ans=0;
    while(i<n1 and j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            
            if(count==k)
             {
                ans=arr1[i]; 
             
                 return ans;
             }
        
            i++;
        }
       else{
           
            if(count==k)
             {
                ans=arr2[j]; 
             
                 return ans;
             }
       
           j++;
       }
   count++;
   
    }

while(i<n1)
{
    if(count==k)
    {
        ans=arr1[i];
    
        return ans;
    }
   i++; 
count++;
}
 while(j<n2)
{
    if(count==k)
    {
        ans=arr2[j];
    
        return ans;
    }
   j++; 
count++;
}   
    return    ans; 
    }
