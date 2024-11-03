vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
    vector<vector<int>>adj(V);// dont igmore V because it can cause a segmentation fault
     for(auto i:edges)
     {
         adj[i.first].push_back(i.second);
         adj[i.second].push_back(i.first);
     }
        return adj;
        
    }
