void solve(TreeNode* root, vector<int> &ans, int lvl = 0)
    {
        if(root == NULL) return;

        if(ans.size() == lvl) ans.push_back(root->val);

        if(root -> right) solve(root->right,ans,lvl+1);
        if(root -> left) solve(root->left,ans,lvl+1);
    }

    vector<int> rightSideView(TreeNode* root) {

        vector<int> ans;
        solve(root, ans);
        return ans;
    }