 string removeStars(string s) {
        
        stack<char> st;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != '*')
            {
                st.push(s[i]);
            }
            else if(s[i] == '*')
            {
                if(st.empty())
                {
                    continue;
                }
                else
                {
                    st.pop();
                }
            }
        }

        string s2 = "";

        while(!st.empty())
        {
            s2 += st.top();
            st.pop();
        }


    reverse(s2.begin(),s2.end());
    return s2;

    }