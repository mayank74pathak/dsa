youtubelink-https://www.youtube.com/watch?v=VXqUQYGMnQg&t=5s
int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        
        dp[0]=nums[0];
        if(n==1)
        return dp[0];
        
        dp[1]=max(nums[1],nums[0]);
        
        
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
    return dp[n-1];
    }
