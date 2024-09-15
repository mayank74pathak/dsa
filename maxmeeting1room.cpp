
//https://www.youtube.com/watch?v=_bB83y3nTJQ
int maxMeetings(int n, int start[], int end[]) {
        // Your code here
    vector<pair<int,int>>temp;
    for(int i=0;i<n;i++)
    {
        temp.push_back({end[i],start[i]});
    }
    sort(temp.begin(),temp.end());
    int ans=1;int last=temp[0].first;
    for(int i=1;i<n;i++)
        {
            if(last<temp[i].second)
            {
                ans++;
                last=temp[i].first;
            }
        }
    
    return ans;    
    }
