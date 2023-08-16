void solve(vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int> &out,int index)
    {
        //base case
        if(index == candidates.size())
        {
            if(target == 0)
            {
                ans.push_back(out);
            }
            return;
        }

        //including same index element until target is zero or the target is less then candidates[index]

        if(target >= candidates[index])
        {
            out.push_back(candidates[index]);
            solve(candidates,target - candidates[index], ans,out,index);
            out.pop_back();
        }

        //excluding the same index and moving to another index
        solve(candidates,target,ans,out,index+1);

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> out;
        int iter = 0;
        solve(candidates,target,ans,out,iter);
        return ans;
    }