bool solve(TreeNode* left, TreeNode* right)
    {
        if(!left || !right) return left == right;

        if(left->val != right->val) return false;

        return solve(left->left, right->right) && solve(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        
        return root == NULL || solve(root->left,root->right);
    }