vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
    
        queue<int>q;
        vector<int>ans;
        
        vector<int>vis(V,0);
        q.push(0);
     vis[0]=1;
        while(!q.empty())
        {
            int front=q.front();
            q.pop();
            ans.push_back(front);
            for(it:adj[front])
            {
                if(!vis[it])
                {
                    vis[it]=1;
                    q.push(it);
                }
            }
        
            
        }
    
        return ans;
    }
