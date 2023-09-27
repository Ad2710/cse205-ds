int calPoints(vector<string>& operations) {
        
        stack<int> st;

        int sum_val = 0;

        for(int i = 0; i < operations.size(); i++)
        {

            string c1 = operations[i];

            if(!st.empty() && operations[i] == "C")
            {
                sum_val -= st.top();
                st.pop();
            }
            else if(!st.empty() && operations[i] == "D")
            {
                st.push(st.top()*2);
                sum_val += st.top();
            }
            else if(!st.empty() && operations[i] == "+")
            {
                int a,b;

                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                sum_val+=a+b;
                
                int sum = a + b;
                st.push(b);
                st.push(a);
                st.push(sum);

            }
            else
            {
                st.push(stoi(operations[i]));
                sum_val += st.top();
            }
        }

        return sum_val;

    }