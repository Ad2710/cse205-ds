int largestInteger(int num) {
        
        priority_queue<int> pq_even;
        priority_queue<int> pq_odd;

        string nums = to_string(num);

        for(int i = 0; i < nums.size(); i++)
        {
            int digit = nums[i] - '0';

            if(digit % 2 == 0)
            {
                pq_even.push(digit);
            }
            else
            {
                pq_odd.push(digit);
            }
        }

        int new_num = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if((nums[i] - '0') % 2 == 0)
            {
                new_num = new_num*10 + pq_even.top();
                pq_even.pop();
            }
            else
            {
                new_num = new_num*10 + pq_odd.top();
                pq_odd.pop();
            }
        }
        
        return new_num;
    }