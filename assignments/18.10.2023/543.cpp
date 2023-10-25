pair<int,int> diameter(TreeNode* root)
    {
        if(root == NULL)
        {
            pair<int,int> p = make_pair(0,0);
            return p;
        } 

        pair<int,int> left = diameter(root->left);
        pair<int,int> right = diameter(root->right);
        
        int opt1 = left.first;
        int opt2 = right.first;
        int opt3 = left.second + right.second + 1;

        pair<int,int> ans;
        ans.first = max(opt1,max(opt2,opt3));
        ans.second = max(left.second,right.second) + 1;

        return ans;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        
        pair<int,int> ans = diameter(root);
        return ans.first - 1;
    }