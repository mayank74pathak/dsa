double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>arr;
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0,j=0;
        double ans;
        while(i<n1 and j<n2)
        {
            if(nums1[i]<=nums2[j])
             {
                arr.push_back(nums1[i]);
                i++;
             }
             else
             {
                arr.push_back(nums2[j]);
                j++;
             }
        }
       while(i<n1)
       {
        arr.push_back(nums1[i]);
       i++;
       }
       while(j<n2)
       {
        arr.push_back(nums2[j]);
       j++;
       }
       
       if((n1+n2)%2==0)
       {
        ans=double((arr[arr.size()/2]+arr[arr.size()/2-1])/2);
       }
      else
      ans=double(arr[arr.size()/2]);
    return ans;
    }
