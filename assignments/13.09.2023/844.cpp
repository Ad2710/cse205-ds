bool backspaceCompare(string s, string t) {
        
        stack<char> st1;
        stack<char> st2;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i]!='#')
            {
                st1.push(s[i]);
            }
            else if(s[i] == '#')
            {
                if(st1.empty())
                {
                    continue;
                }
                st1.pop();
            }
        }

        for(int i = 0; i < t.length(); i++)
        {
            if(t[i]!='#')
            {
                st2.push(t[i]);
            }
            else if(t[i] == '#')
            {
                if(st2.empty())
                {
                    continue;
                }
                st2.pop();
            }
        }

        if(st1.size() != st2.size())
        {
            return false;
        }

        if(st1.empty() && st2.empty())
        {
            return true;
        }

        while(!st1.empty() && !st2.empty())
        {
            if(st1.top() != st2.top())
            {
                return false;
            }
            else
            {
                st1.pop();
                st2.pop();
            }
        }

        return true;

    }