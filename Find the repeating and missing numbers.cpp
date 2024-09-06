 vector<int> findTwoElement(vector<int> arr) {
        // code here
    vector<int>ans;
    unordered_map<int,int>m;
    for(int i=0;i<arr.size();i++)
    {
        m[arr[i]]++;
    }
    for(auto it:m)
    {
      if(it.second>=2)
      ans.push_back(it.first);
    }
     
     for(int i=1;i<=arr.size();i++)
     {
         if(m[i]==0)
         {
             ans.push_back(i);
             break;
         }
         
     }
return ans;
    }
