vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
    int c=nums.size()/3;
    for(auto it:m)
{
    if(it.second>c)
    {
    ans.push_back(it.first);
    }
}    
    return ans;
    }
