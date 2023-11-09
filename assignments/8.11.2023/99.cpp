class Solution {
private:
    TreeNode* prev = NULL;
    TreeNode* first = NULL;
    TreeNode* middle = NULL;
    TreeNode* last = NULL;

private: 
    void inorder(TreeNode* root)
    {
        if(!root) return;

        inorder(root -> left);

        if(prev && prev->val > root->val)
        {
            if(!first)
            {
                first = prev;
                middle = root;
            }
            else
            {
                last = root;
            }
        }
        prev = root;

        inorder(root -> right);
    }


public:

    void recoverTree(TreeNode* root) {
        first = NULL;
        last = NULL;
        middle = NULL;

        inorder(root);
        if(first && last) swap(first -> val, last -> val);
        else if(first && middle) swap(first -> val, middle -> val);
    }
};