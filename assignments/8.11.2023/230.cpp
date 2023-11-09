TreeNode* find(TreeNode* curr)
    {
        TreeNode* temp = curr;
        temp = temp -> left;
        while(temp -> right != NULL && temp -> right != curr)
        {
            temp = temp -> right;
        }

        return temp;
    }

    void morrisTraversal(TreeNode* root, vector<int> &ans)
    {
        TreeNode* curr = root;

        while(curr != NULL)
        {
            if(curr -> left == NULL)
            {
                ans.push_back(curr->val);
                curr = curr -> right;
            }
            else
            {
                TreeNode* pred = find(curr);

                if(pred -> right == NULL)
                {
                    pred -> right = curr;
                    curr = curr -> left;
                }
                else
                {
                    pred -> right = NULL;
                    ans.push_back(curr->val);
                    curr = curr -> right;
                }
            }
        }
    }

    int kthSmallest(TreeNode* root, int k) {
        int i = 0;
        vector<int> ans;

        morrisTraversal(root,ans);
        return ans[k-1];
    }