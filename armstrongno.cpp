string armstrongNumber(int n) {
        // code here
     int temp=n;
     int c=0;
     while(temp!=0)
     {
         int rem=temp%10;
         c=rem*rem*rem+c;
         temp=temp/10;
         
     }
    if(c==n)
    return "true";
    else
    return "false";
        
    }
