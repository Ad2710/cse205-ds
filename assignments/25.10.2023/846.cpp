bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize) return false;

        priority_queue<int, vector<int>, greater<int>> minHeap;
        map<int,int> freq;

        for(auto it: hand)
        {
            if(freq[it] == 0)
            {
                minHeap.push(it);
            }
            freq[it]++;
        }

        bool chk = true;

        vector<int> temp;

        while(!minHeap.empty())
        {
            int it = 1;
            int digit = 0;
            for(int i = 0; i < groupSize; i++)
            {         
                if(it!=1)
                {
                    if((minHeap.top() - digit) != 1) return false;
                    else
                    {
                        digit = minHeap.top();
                        minHeap.pop();
                        temp.push_back(digit);
                    }
                }
                else
                {
                    digit = minHeap.top();
                    minHeap.pop();
                    temp.push_back(digit);
                }
                it++;
            }

            for(int i = 0; i < temp.size(); i++)
            {
                if(--freq[temp[i]] > 0) minHeap.push(temp[i]);
            }
            temp.clear();
        }
        return true;
    }