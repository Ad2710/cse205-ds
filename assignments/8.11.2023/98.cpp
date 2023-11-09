bool solve(TreeNode* root,long long int min,long long int max)
    {
        if(root == NULL)
        {
            return true;
        }

        bool chk = true;

        if(root -> val > min && root -> val < max)
        {
            //left call
            bool left = solve(root -> left, min,root->val);
            //right call
            bool right = solve(root -> right, root -> val, max);

            chk = left && right;
        }
        else{
            chk = false;
        }  
     return chk;   
    }

    bool isValidBST(TreeNode* root) 
    {
        if(root == NULL || (root -> left == NULL && root -> right == NULL))
            return true;
 
        long long int lb = -2147483649;
        long long int ub = 2147483648;
        return solve(root,lb,ub);
    }