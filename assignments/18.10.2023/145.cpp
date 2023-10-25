void solve(TreeNode* root, vector<int> &v)
        {
            if(root == NULL)
            {
                return;
            }

            solve(root->left,v);
            solve(root->right,v);
            v.push_back(root->val);
        }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root,ans);
        return ans;
    }