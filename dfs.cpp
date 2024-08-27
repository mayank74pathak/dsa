void dfs(vector<int> adj[],int vis[],vector<int>&ans,int node)
    {
        vis[node]=1;
        ans.push_back(node);
        for (auto i:adj[node])
        {
             if(!vis[i])
             dfs(adj,vis,ans,i);
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
    vector<int>ans;
    
    int vis[V]={0};
    int start=0;
    dfs(adj,vis,ans,start);
        
      return ans;  
    }
