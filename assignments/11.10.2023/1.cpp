vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mapping;

        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if(mapping.find(diff) != mapping.end())
            {
                return {mapping[diff],i};
            }
            mapping[nums[i]] = i;
        }

        return {-1,-1};

    }