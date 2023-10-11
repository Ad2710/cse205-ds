int numIdenticalPairs(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int,int> freq;

        int cnt = 0;

        for(int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }

        for(auto it: freq)
        {
            if(it.second >= 2)
            {
                int num = it.second;
                cnt+= (num)*(num-1)/2;
            }
        }

        return cnt;

    }