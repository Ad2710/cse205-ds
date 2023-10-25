int solve(TreeNode* root, int &max_sum)
    {
        if(root == NULL)
        {
            return 0;
        }

        int left = max(0,solve(root -> left, max_sum));
        int right = max(0,solve(root -> right, max_sum));

        int max_path = max(left,right);
        int sum = left + right + root -> val;
        max_sum = max(sum,max_sum);
        return max_path + root -> val;
    }

    int maxPathSum(TreeNode* root) {
        int max_sum = INT_MIN;
        solve(root,max_sum);
        return max_sum;
    }