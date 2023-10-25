void solve(TreeNode* root, vector<int> &v)
    {
        if(root == NULL)
        {
            return;
        }

        solve(root->left,v);
        v.push_back(root->val);
        solve(root->right,v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root,ans);
        return ans;

        //iterative solution
        // stack<TreeNode*> st;
        // vector<int> inorder;
        // TreeNode* node = root;
        // while(true)        
        // {
        //     if(node!=NULL)
        //     {
        //         st.push(node);
        //         node = node -> left;
        //     }
        //     else
        //     {
        //         if(st.empty() == true) break;
        //         node = st.top();
        //         st.pop();
        //         inorder.push_back(node->val);
        //         node = node -> right;
        //     }
        // }
        // return inorder;
    }