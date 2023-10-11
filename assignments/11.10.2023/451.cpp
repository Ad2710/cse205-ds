string frequencySort(string s) {
        
        priority_queue<pair<int,char>> pq;

        unordered_map<char,int> freq;

        for(int i = 0; i < s.length(); i++)
        {
            freq[s[i]]++;
        }

        for(auto it: freq)
        {
            pq.push({it.second,it.first});
        }

        string ans = "";

        while(pq.size())
        {
            char c = pq.top().second;
            int freq = pq.top().first;

            while(freq)
            {
                ans.push_back(c);
                freq--;
            }
            pq.pop();
        }

        return ans;

    }