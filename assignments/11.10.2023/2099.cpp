vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        unordered_map<int,int> mpp;
        vector<int> temp = nums;

        sort(nums.begin(),nums.end(),greater<int>());

        for(int i = 0; i < k; i++)
        {
            mpp[nums[i]]++;
        }

        vector<int> ans;

        for(auto it: temp)
        {
            if(mpp[it]-->0)
            {
                ans.push_back(it);
            }
        }
        return ans;
    }