int minimumEnergy(vector<int>& height, int n) {
        // Code here
    vector<int>dp(n,0);
    int ss=INT_MAX;
    int fs;
    for(int i=1;i<n;i++)
    {
    fs=dp[i-1]+abs(height[i-1]-height[i]);
    if(i>1)
    ss=dp[i-2]+abs(height[i-2]-height[i]);
    dp[i]=min(ss,fs);
        
    }
        return dp[n-1];
    }
