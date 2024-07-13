vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        vector<int>ans;
        int n=nums.size();
        for(int i=2*n-1;i>=0;i--)
        {
          while(!st.empty()and st.top()<=nums[i%n])
          {
            st.pop();
          }
         if(i<n)
         {
            int ng=st.empty()?-1:st.top();
            ans.push_back(ng);
         }
         st.push(nums[i%n]);
        }
    reverse(ans.begin(),ans.end());
    return ans;
    }
//video link-- https://www.youtube.com/watch?v=0fGJDEVdASU
