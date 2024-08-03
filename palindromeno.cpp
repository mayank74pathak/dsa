bool isPalindrome(int x) {
        if(x<0)
        return false;
        int temp=x;
        long int c=0;

        while(temp>0)
        {
         c=temp%10+c*10;
         temp=temp/10;
        }
    if(c==x)
    return true;
    return false;
    }
