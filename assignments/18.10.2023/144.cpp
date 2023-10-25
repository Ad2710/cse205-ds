void solve(TreeNode* root, vector<int> &v)
    {
        if(root == NULL)
        {
            return;
        }

        v.push_back(root->val);
        solve(root->left,v);
        solve(root->right,v);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root,ans);
        return ans;

        //iterative solution
        // vector<int> preorder;
        // if(root == NULL)
        // {   
        //     return preorder;
        // }
        // stack<TreeNode*> st;
        // st.push(root);

        // while(!st.empty())
        // {
        //     root = st.top();
        //     st.pop();
        //     preorder.push_back(root->val);
        //     if(root -> right) st.push(root->right);
        //     if(root -> left) st.push(root->left);
        // }
        // return preorder;
    }
};