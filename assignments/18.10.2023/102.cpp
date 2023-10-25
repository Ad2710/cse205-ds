vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL)
        {
            return {};
        }
        else if(root -> right == NULL && root -> left == NULL)
        {
            return {{root->val}};
        }
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<vector<int>> ans;
        vector<int> temp_ans;

        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();

            if(temp == NULL)
            {   cout<<"A ";
                ans.push_back(temp_ans);
                temp_ans.clear();

                if(!q.empty())               
                {
                    q.push(NULL);
                }
            }
            else
            {
                cout<<temp->val<<" ";
                temp_ans.push_back(temp->val);

                if(temp && temp -> left)
                {
                    q.push(temp->left);
                }

                if(temp && temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
        
        return ans;
    }