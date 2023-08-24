void solve(int n,vector<string>&ans, string &out, int open, int close)
    {
        //base case
        if(out.length() == 2*n)
        {
            ans.push_back(out);
            return;
        }

        //pick of the opening bracket
        if(open<n)
        {
            out+='(';
            solve(n,ans,out,open+1,close);
            out.pop_back();
        }
        //pick case of the closing bracket
        if(close < open)
        {
            out+=')';
            solve(n,ans,out,open,close+1);
            out.pop_back();
        }

    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string out;

        solve(n,ans,out, 0, 0);

        return ans;
    }