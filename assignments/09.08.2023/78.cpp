void solve(vector<int> &v1, vector<vector<int>> &ans, vector<int>& temp, int i, int n)
    {
        if(i >= n)
        {
            ans.push_back(temp);
            return;
        }


        //exclude
        solve(v1,ans,temp,i+1,n);

        //include
        temp.push_back(v1[i]);
        solve(v1,ans,temp,i+1,n);
        temp.pop_back();
        
 
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(nums,ans,temp,0,nums.size());

        return ans;
    }