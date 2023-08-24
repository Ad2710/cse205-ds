    void solve(vector<int> &arr,int n, int index, vector<vector<int>> &ans)
    {
        //base case
        if(n == index)
        {
            ans.push_back(arr);
        }

        for(int i = index; i < n; i++)
        {
            swap(arr[index], arr[i]);
            solve(arr,n,index+1,ans);
            swap(arr[index], arr[i]);
        }
    }
 
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        solve(nums,nums.size(),0,ans);

        return ans;
    }