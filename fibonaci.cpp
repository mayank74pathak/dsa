class Solution {
   long long int mod=1e9+7;
  long long int tdown(int n,vector<long long int>&dp)//memomization  
  {
      if(n<=1)
      return n;
      if(dp[n]!=-1)
  {
      return dp[n];
  }
return dp[n]=(tdown(n-1,dp)+tdown(n-2,dp))%mod;      
  }
  public:
    long long int topDown(int n) {
        // code here
      vector<long long int>dp(n+1,-1);
      return tdown(n,dp);
    }
    long long int bottomUp(int n) {//tabulation method 
        // code here
         // code here
      
       long long int curr;
       if( n<=1)
       return n;
  long long int   prev1=0;
     long long int prev2=1;
     for(int j=2;j<=n;j++)
     {
         curr=(prev1+prev2)%mod;
        prev1=prev2;
        prev2=curr;
     }
    return curr;    
    }
