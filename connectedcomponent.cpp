void dfs(int node, vector<int>adjlist[],int vis[])
    {
        vis[node]=1;
        for(auto it:adjlist[node])
        {
            if(!vis[it])
            dfs(it,adjlist,vis);
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
       vector<int>adjlist[V];
       for(int i=0;i<V;i++)
       {
           for(int j=0;j<V;j++)
           {
               if(adj[i][j]==1 and i!=j)
                 
                 {
                     adjlist[i].push_back(j);
                     adjlist[j].push_back(i);              
                     
                 }
             }
       }
     int vis[V]={0};
     int cnt=0;
     for(int i=0;i<V;i++)
     {
         if(!vis[i])
         
         {
             cnt++;
             dfs(i,adjlist,vis);
     
             
         }
     
        
    }
return cnt;
    }    
