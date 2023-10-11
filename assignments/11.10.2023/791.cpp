string customSortString(string order, string s) {
        unordered_map<char,int> mpp;

        for(int i = 0; i < s.length(); i++)
        {
            mpp[s[i]]++;
        }

        int ind = 0;
        string ans = "";

        while(ind < order.length())
        {
            char ch = order[ind];
            if(mpp.find(ch) != mpp.end())
            {
                int freq = mpp[ch];
                while(freq)
                {
                    ans.push_back(ch);
                    freq--;
                }
                mpp.erase(ch);
            }
            ind++;
        }

        for(auto it = mpp.begin(); it != mpp.end(); it++)
        {
            char ch = it -> first;
            int freq = it -> second;

            while(freq)
            {
                ans.push_back(ch);
                freq--;
            }
        }

        return ans;
    }