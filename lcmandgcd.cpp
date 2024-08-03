vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
    long long x,y;
    x=A;
    y=B;
    long long gcd,lcm;    
        while(x>0 and y>0)
        {
            if(x>y)
            x=x%y;
            else
            y=y%x;
        }
    if(x==0)
    gcd=y;
    else
    gcd=x;
    
    lcm=(A*B)/gcd;    
        return {lcm,gcd};
    }
