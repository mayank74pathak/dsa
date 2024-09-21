//https://www.youtube.com/watch?v=-UPo_dzBw1c&t=867s

int matrixMultiplication(int N, int arr[])
    {
        // code here
    int dp[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            dp[i][j]=0;
        }
    }
    
    for(int len =2;len<N;len++)
    {
        for(int row=0,col=len;row<N-len;row++,col++)
        {
          dp[row][col]=INT_MAX;
          for(int k=row+1;k<col;k++)
          {
              dp[row][col]=min(dp[row][col],dp[row][k]+dp[k][col]+arr[row]*arr[k]*arr[col]);
          }
            
        }
    }
    return dp[0][N-1];    
    }
