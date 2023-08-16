class Solution {
public:

    void solve(int n, int k, vector<vector<int>> &ans, vector<int> &out, int j)
    {
        //base case
        if(n == 1)
        {
            ans.push_back({n});
            return;
        }
        //base case
        if(out.size() == k)
        {
            ans.push_back(out);
            return;
        }

        for(int i = j; i <= n; i++)
        {
            out.push_back(i);
            solve(n,k,ans,out,i+1);
            out.pop_back();
        }

    }

    vector<vector<int>> combine(int n, int k) {
        
        vector<int> out;
        vector<vector<int>> ans;

        solve(n,k,ans,out,1);

        return ans;

    }
};