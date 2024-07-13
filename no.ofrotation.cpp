int findKRotation(vector<int> &arr) {
        // Code Here
    int low =0;
        int high=arr.size()-1;
        int mini=INT_MAX;
        int mid;
       int index=-1;
        while(low<=high)
        {
             mid=(low+high)/2;
            if(arr[low]<=arr[mid])
            {
                if(mini>arr[low])
                {
                  mini=arr[low];
                  index=low;
                }
                low=mid+1;
            }
           else
           {
            if(arr[mid]<mini)
            {
                mini=arr[mid];
                index=mid;
            }
            
           high=mid-1;
           }
        
        }
    return index;
    
        
    }
