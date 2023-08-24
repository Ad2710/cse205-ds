int solve(int &n)
    {
        int num = 0;
        while(n!=0)
        {
            n = n/10;
            num++;
        }
        return num;
    }

    int findNumbers(vector<int>& nums) {
        
        int even = 0;

        for(int i = 0; i<nums.size(); i++)
        {
            if(solve(nums[i]) % 2 == 0)
            {
                even++;
            }
        }

        return even;

    }