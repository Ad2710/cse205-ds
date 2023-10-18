bool wordPattern(string pattern, string s) {
        
        vector<string> v;
        string st;
        stringstream ss(s);

        while(getline(ss,s,' '))
        {
            v.push_back(s);
        }

        unordered_map<char,string> mpp;

        for(int i = 0; i < v.size(); i++)
        {
            if(mpp.find(pattern[i]) != mpp.end() && mpp[pattern[i]] != v[i])
            {
                return false;
            }

            mpp[pattern[i]] = v[i];
        }

        unordered_set<string> set;

        for(auto it:mpp)
        {
            if(!set.insert(it.second).second)
            {
                return false;
            }
        }

        if(pattern.size() != v.size()) return false;

        return true;
    }