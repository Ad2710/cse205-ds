void cyclic_sort(vector<int> &nums)
    {
        int s = 0;
        int n = nums.size();

        while(s < n)
        {
            if(nums[s] == n) s++;
            else if(s != nums[s])
                swap(nums[s], nums[nums[s]]);
            else
                s++;
        }
    }

    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        cyclic_sort(nums);

        for(int i = 0; i < n; i++)
        {
            if(nums[i] - i != 0)
            {
                return i;
            }
        }

        return n;
    }