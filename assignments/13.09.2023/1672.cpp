int maximumWealth(vector<vector<int>>& accounts) {

        int max_wealth = INT_MIN;

        for(int i = 0; i < accounts.size();i++)
        {
            int sum = 0;
            for(int j = 0; j < accounts[i].size();j++)
            {
                sum += accounts[i][j];
            }

            if(sum > max_wealth)
            {
                max_wealth = sum;
            }
        }

        return max_wealth;

    }