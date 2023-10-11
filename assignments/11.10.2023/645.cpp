vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> check;

        int dup = 0;
        int sum = 0;
        for(int i = 0;i < n; i++)
        {
            if(check.find(nums[i]) == check.end())
            {
                check.insert(nums[i]);
                sum+=nums[i];
            }
            else
            {
                dup = nums[i];
            }
        }

        int tot_sum = ((n)*(n+1))/2;
        
        int num2 = tot_sum-sum;

        return {dup, num2};
    }