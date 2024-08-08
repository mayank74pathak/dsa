int trap(vector<int>& height) {         //https://www.youtube.com/watch?v=UZG3-vZlFM4
          int n=height.size();
        int right[n];
       int  left[n];
      
        if(n<3)
        return 0;
        int max=height[0];
        left[0]=height[0];
        for(int i=1;i<height.size();i++)
         {
          if(height[i]<max)
          left[i]=max;
          else
           {
            left[i]=height[i];
         max=height[i];
         }
         }
     int max2=height[n-1];
     right[n-1]=height[n-1];
     for(int i=n-2;i>=0;i--)
         {
          if(height[i]<max2)
          right[i]=max2;
          else
           {
            right[i]=height[i];
         max2=height[i];
         }
         }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans+min(left[i],right[i])-height[i];
    }
    
    return ans;
    }
