int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;

        for(auto it: nums)
        {
            pq.push(it);
        }

        int num = 0;

        while(k)
        {
            num = pq.top();
            pq.pop();
            k--;
        }

        return num;
    }