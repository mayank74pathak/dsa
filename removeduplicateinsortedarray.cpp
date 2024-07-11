int removeDuplicates(vector<int>& nums) {//inplace without using extra space 
     int i=0,j=1,k=1;
     int count=1;
     for(int j=1;j<nums.size();j++)
     {
      if(nums[i]!=nums[j])
       {
       count++;
        nums[k]=nums[j];
       k++;
       }
      i++;
     }   
    return count;
    }
