int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for(auto i: stones) pq.push(i);

        while(pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            if(pq.size() == 0)
            {
                pq.push(a-b);
                break;
            }

            if(a == b)
            {
                continue;
            }
            else
            {
                pq.push(a-b);
            }
        }

        return pq.top();
    }