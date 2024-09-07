//https://www.youtube.com/watch?v=fxwvVnBMN6I&t=785s
//worst case tc n^3 optimal way is n^2
string longestPalindrome(string s) {
        int n=s.length();
        int maxlength=0;
        vector<vector<int>>dp(n,vector<int>(n,0));
        string ans;
        for(int diff=0;diff<n;diff++)
        {
            for(int i=0,j=i+diff;j<n;i++,j++)
            {
                if(i==j)
                {
                    dp[i][j]=1;
                }
               else if(diff==1)
               {
                dp[i][j]=(s[i]==s[j])?2:0;
               }
               else{
                if(dp[i+1][j-1] and s[i]==s[j])
                dp[i][j]=dp[i+1][j-1]+2;
               }
             if(dp[i][j])
             {
              if(j-i+1>maxlength)
              {
              maxlength=j-i+1;
             ans=s.substr(i,maxlength);
              }
             }

            }
        }
   return ans;
    }
