vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
    unordered_map<int ,int>m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    int a,b;
    for(auto it:m)
    {
        if(it.second>1)
        {
        a=it.first;
        break;
        }
            
        }
    for(int i=1;i<=n;i++)
    {
        if(m[i]==0)
        {
            b=i;
            break;
        }
    }
        return {a,b};
        
    }
