vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL)
        {
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        bool chkLeftToRight = true;
        vector<vector<int>> ans;
        vector<int> temp_Arr;
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0; i < size; i++)
            {
                TreeNode* temp = q.front();
                q.pop();

                int index = chkLeftToRight ? i : size - i - 1;
                temp_Arr.resize(size);
                if(temp)
                {
                    temp_Arr[index] = temp -> val;
                }

                if(temp && temp -> left)
                {
                    q.push(temp->left);
                }

                if(temp && temp->right)
                {
                    q.push(temp->right);
                }
            }
            chkLeftToRight = !chkLeftToRight;
            ans.push_back(temp_Arr);
            temp_Arr.clear();
        }
        return ans;
    }