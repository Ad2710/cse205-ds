int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int max_occur = INT_MIN;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }

            max_occur = max(max_occur,cnt);
        }

        return max_occur;
    }