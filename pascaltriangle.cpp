vector<vector<int>> generate(int numRows) {
       vector<vector<int>>ans(numRows);//declaration 
         ans[0].push_back(1);
        for(int i=1;i<numRows;i++)
        {
            ans[i].push_back(1);
            for(int j=0;j<=(i-2);j++)
            {
                ans[i].push_back(ans[i-1][j]+ans[i-1][j+1]);//only push ans rows and dont push columns it throw a error
            }
            ans[i].push_back(1);
        }
    return ans; 
    }
