vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> v1;
        map<int,map<int, vector<int>>> mpp;// hd, lvl, integer val
        queue<pair<TreeNode*, pair<int,int>>> q;//node, pair(hd,lvl)

        q.push(make_pair(root, make_pair(0,0)));

        while(!q.empty())
        {
            auto it = q.front();
            TreeNode* temp = it.first;
            int hd = it.second.first;
            int lvl = it.second.second;

            q.pop();

            mpp[hd][lvl].push_back(temp->val);

            if(temp && temp -> left)
                q.push(make_pair(temp->left,make_pair(hd-1,lvl+1)));
            
            if(temp && temp -> right)
                q.push(make_pair(temp->right, make_pair(hd+1,lvl+1)));

        }

        vector<int> temp;
        vector<int> temp2;

        for(auto it: mpp)
        {
            for(auto i: it.second)
            {
                for(auto j: i.second)
                {
                    temp2.push_back(j);
                }
                sort(temp2.begin(),temp2.end());
                for(auto it: temp2)
                    temp.push_back(it);
                temp2.clear();
            }
            v1.push_back(temp);
            temp.clear();
        }
        return v1;
    }