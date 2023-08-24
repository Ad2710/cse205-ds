int triangularSum(vector<int>& nums) {
        
        while(nums.size()!=1)
        {
            for(int i = 1; i < nums.size(); i++)
            {
                nums[i-1] = (nums[i] + nums[i-1])%10;
            }
            nums.pop_back();
        }

        return nums[0];

    }