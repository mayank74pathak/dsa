 int findMaxConsecutiveOnes(vector<int>& nums) {
         int c=0,cmax=0,i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
            c++;
            if(c>cmax)
             {
              cmax=c;   
             }

            
            }
            else
            {
                c=0;
            } 
        }
    return cmax;           
    }
