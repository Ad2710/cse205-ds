vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;

        for(int i = 0; i < score.size(); i++)
        {
            pq.push(make_pair(score[i],i));
        }

        queue<string> q;
        q.push("Gold Medal");
        q.push("Silver Medal");
        q.push("Bronze Medal");

        int rank = 1;

        vector<string> ans(score.size());

        while(rank <= score.size())
        {
            auto it = pq.top();
            int ind = it.second;
            pq.pop();
            if(rank <= 3)
            {
                ans[ind] = q.front();
                q.pop();
            }
            else
            {
                ans[ind] = to_string(rank);
            }
            rank++;
        }
        

        return ans;
    }