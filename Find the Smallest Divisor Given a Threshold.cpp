int getMax(vector<int> &nums) {
        int max = nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] > max) max = nums[i];
        }
        return max;
    }

    int divide(vector<int> &nums, int divisor) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++) {
            sum += ceil(double(nums[i]) / double(divisor));
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = getMax(nums);
        int ans = 0;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(divide(nums, mid) <= threshold) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
