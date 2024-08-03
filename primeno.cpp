int isPrime(int N){
        // code here
    int n=sqrt(N);
    
    int i=2;
    int count=1;
    if(N==1)
    return 0;
    while(i<=n)
    {
        if(N%i==0)
        count++;
       i++; 
    }
        if(count==1)
        return 1;
        else
        return 0;
    }
