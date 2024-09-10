//https://www.youtube.com/watch?v=7BX3JxuAeWY
bool check(vector<vector<char>>&board,int row ,int col,char c)
    {
        for(int i=0;i<9;i++)
        {
            if(board[i][col]== c)
            return false;
        }
        for(int i=0;i<9;i++)
        {
            if(board[row][i]== c)
            return false;
        }
    int ini=row-row%3;
    int inj=col-col%3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(board[ini+i][inj+j]==c)
            return false;
        }
    }
    return true;
    }
    bool helper(vector<vector<char>>&board,int row ,int col)
    {
        int n=board.size();
        if(row==9)
        return true;
        if(col==9)
        return helper(board,row+1,0);
        if(board[row][col]!='.')
        return helper(board,row,col+1);
        for(char c='1';c<='9';c++)
        {
            if(check(board,row,col,c))
            {
                board[row][col]=c;
                if(helper(board,row,col+1))
                return true;
            }
        board[row][col]='.'; 
        }
       return false;  
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
    }
