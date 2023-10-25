int maxProduct(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;

        for(int i = 0; i < 2; i++) pq.push(nums[i]);

        for(int i = 2; i < nums.size(); i++)
        {
            if(pq.top() < nums[i])
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }

        int a = pq.top();
        pq.pop();
        int b = pq.top();
        return (a-1)*(b-1);
        // sort(nums.begin(),nums.end(),greater<int>());
        // return (nums[0]-1)*(nums[1]-1);
    }