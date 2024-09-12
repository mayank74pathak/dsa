//https://www.youtube.com/watch?v=9u2BJfmWNEg
int celebrity(vector<vector<int> >& mat) {
        // code here
      stack<int>s;
      int n=mat[0].size();
      for(int i=0;i<n;i++)
         s.push(i);
      while(s.size()>1)
      {
          int a =s.top();
          s.pop();
          int b=s.top();
          s.pop();
          if(mat[a][b]==1)
          {
              s.push(b);
          }
          else
          s.push(a);
      }
    
    int candidate=s.top();
    bool rowcheck=true;
    for(int i=0;i<n;i++)
    {
        if(mat[candidate][i]==1)
          rowcheck=false;
    }
    bool colcheck=true;
    for(int i=0;i<n;i++)
    {
        if(mat[i][candidate]==0 and i!=candidate)
          colcheck=false;      
        
    }
if(rowcheck == true and colcheck==true)
return candidate;
else
return -1;
    }
