class KthLargest {
public:

    priority_queue<int,vector<int>, greater<int>> pq;
    int m = 0;

    KthLargest(int k, vector<int>& nums) {
        m = k;
        for(auto it: nums) add(it);
    }
    
    int add(int val) {
        
        if(pq.size() < m)
        {
            pq.push(val);
        }
        else
        {
            if(val > pq.top())
            {
                pq.pop();
                pq.push(val);
            }
        }

        return pq.top();

    }
};