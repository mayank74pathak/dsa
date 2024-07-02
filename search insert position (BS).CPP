int searchInsert(vector<int>& nums, int target) {
         int l=0;
        int n=nums.size();
        int r=n-1;
        int ans;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            {
                r=mid-1;
                ans=mid;
            }
          else
          {
            l=mid+1;
          }
        }
    if(target<nums[0])
    return 0;
    if(target>nums[n-1])
    return n;
    return ans;
    }
