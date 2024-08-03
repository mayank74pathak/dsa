int reverse(int x) {
         int d;
            long int  c=0;
        
        while(x!=0)
        {
         d=x%10;
         c=c*10+d;
         x=x/10;
        }
   if(INT_MIN<=c && c<=INT_MAX)
   return c;
   
   else
   return 0;
    }
