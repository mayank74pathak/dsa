 int robber(vector<int>& arr)// its same from previous one but its a circular based housing and skip first house array and last house array makes it problem solve 
   {
    int n=arr.size();
    vector<int>dp(n);
    dp[0]=arr[0];
    if(n==1)
    return dp[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2 ;i< n;i++ )
    {
        dp[i]=max((dp[i-2]+arr[i]),dp[i-1]);
    }
  return dp[n-1];
   }
   
   
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>skipfirsthouse(n-1);
        vector<int>skiplasthouse(n-1);
        if(n==1)
        return nums[0];
         if(n==2)
         return max(nums[0],nums[1]);

        for(int i=0;i<n-1;i++)
        {
         skipfirsthouse[i]=nums[i+1];
         skiplasthouse[i]=nums[i]; 
        }
      int ans1=robber(skipfirsthouse);
      int ans2=robber(skiplasthouse);
return max(ans1,ans2);
    
    }
