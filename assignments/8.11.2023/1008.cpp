TreeNode* construct(vector<int> &preorder, int &i, int ub)
    {
        if(i == preorder.size() || preorder[i] > ub) return NULL;

        TreeNode* root = new TreeNode(preorder[i++]);

        root -> left = construct(preorder, i, root->val);
        root -> right = construct(preorder, i, ub);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        int i = 0;
        return construct(preorder, i, INT_MAX);
    }