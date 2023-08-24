int maxProfit(vector<int>& prices) {
        
        int largest_diff = 0;
        int min_num = INT_MAX;

        for(int i = 0; i < prices.size(); i++)
        {
            if(min_num > prices[i])
            {
                min_num = prices[i];
            }
            else
            {
                int diff = prices[i] - min_num;
                largest_diff = max(largest_diff,diff);
            }
        }

        return largest_diff;

    }