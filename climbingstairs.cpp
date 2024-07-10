int climbStairs(int n) {// just like climbing stairs
        if(n==1)
        return 1;
        int prev1=0;
        int prev2=1;
        int curr;

        for(int i=1;i<n+1;i++)
        {
         curr=prev1+prev2;
         prev1=prev2;
         prev2=curr;

        }
return curr;

    }
