int minSetSize(vector<int>& arr) {
        
        priority_queue<int> pq;

        unordered_map<int,int> mpp;

        for(auto it: arr)
        {
            mpp[it]++;
        }

        int n = arr.size();

        for(auto it: mpp)
        {
            pq.push(it.second);
        }

        int cnt = 0;

        int temp = n;

        while(temp > n/2)
        {
            int num = pq.top();
            temp -= num;
            pq.pop();
            cnt++;
        }

        return cnt;
    }