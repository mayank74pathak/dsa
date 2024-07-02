vector<int> searchRange(vector<int>& nums, int target) {
      vector<int>v;
      int    i=0,k1=-1;
        int  k2=-1;
         int j=nums.size()-1;
         int mid=(i+j)/2;
         //FIRST OCCURANCE
         while(i<=j)
         {
          if(nums[mid]==target)
          {
              j=mid-1;
              k1=mid;   
          }
          else if(nums[mid]>target){
            j=mid-1;
          }
         else{
             i=mid+1;
         }
         
         mid=(i+j)/2;
         }
    if(k1!=-1)
    {
        i=0;
        j= nums.size()-1;
        while(i<=j)
         {
          if(nums[mid]==target)
          {
              i=mid+1;
              k2=mid;   
          }
          else if(nums[mid]>target){
            j=mid-1;
          }
         else{
             i=mid+1;
         }
         
         mid=(i+j)/2;
         }
    v.push_back(k1);
    v.push_back(k2);
    return v;
    }
  else{
      return{-1,-1};
  }  
    }
