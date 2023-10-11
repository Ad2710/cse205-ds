vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        map<int,int> freq_map;

        int n1 = arr1.size();
        int n2 = arr2.size();

        for(int i = 0; i < n1; i++)
        {
            freq_map[arr1[i]]++;
        }

        unordered_map<int,bool> chk2;

        for(int i = 0; i < n2; i++)
        {
            chk2[arr2[i]] = true;
        }

        vector<int> ans;
        int after = 0;
        for(int i = 0; i < n2; i++)
        {
            after += freq_map[arr2[i]];
            while(freq_map[arr2[i]] > 0)
            {
                ans.push_back(arr2[i]);
                freq_map[arr2[i]]--;
            }
        }

        for(int i = 0; i < n1; i++)
        {
            if(!chk2[arr1[i]])
            {
                ans.push_back(arr1[i]);
            }
        }

        sort(ans.begin() + after, ans.end());

    return ans;

    }