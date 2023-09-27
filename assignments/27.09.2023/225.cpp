queue<int> q1;
    queue<int> q2;

    MyStack() {
        
    }
    
    void push(int x) {
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(x);

        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        if(!q1.empty())
        {
            int ans = q1.front();
            q1.pop();
            return ans;
        }

        return -1;
    }
    
    int top() {
        if(!q1.empty())
        {
            return q1.front();
        }

        return -1;
    }
    
    bool empty() {
        return q1.empty();
    }