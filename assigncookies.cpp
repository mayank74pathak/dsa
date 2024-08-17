 int findContentChildren(vector<int>& g, vector<int>& s) {
      sort(g.begin(),g.end());
      sort(s.begin(),s.end());
      int n=g.size();
      int m=s.size();
      int count=0;
      int i=0,j=0;
      while(i<n and j<m)
      {
        if(s[j]>=g[i])
        {
            count++;
            i++;
            j++;
        }
      else
      {
        j++;
      }
      }
    return count;
    }
//https://www.youtube.com/watch?v=DIX2p7vb9co
