//count which evenly divides
int evenlyDivides(int N){
        //code here
    int temp=N;
    int count=0;
    while(temp>0)
    {
        int n=temp%10;
        if(n==0)
        {
           temp=temp/10;
           continue;
        }
        if(N%n==0)
        {
            count++;
        }
    
        temp=temp/10;
    }
        return count;
        
    }
