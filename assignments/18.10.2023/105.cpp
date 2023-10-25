TreeNode* solve(vector<int>& preorder, vector<int> &inorder, map<int,int> &in, int &index, int inStart, int inEnd)
    {
        if(index >= inorder.size() || inStart > inEnd) return NULL;

        int elem = preorder[index++];
        int position = in[elem];
        TreeNode* root = new TreeNode(elem);

        //left call
        root -> left = solve(preorder, inorder, in, index, inStart, position-1);
        //right call
        root -> right = solve(preorder, inorder, in, index, position + 1, inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> in;
        for(int i = 0; i < inorder.size(); i++)
        {
            in[inorder[i]] = i;
        }
        int index = 0;
        return solve(preorder,inorder, in, index, 0, inorder.size()-1);
    }