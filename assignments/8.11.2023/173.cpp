class BSTIterator {

private: 
    stack<TreeNode*> st;

public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* temp = st.top();
        int elem = st.top()->val;
        st.pop();
        pushAll(temp -> right);
        return elem;
    }
    
    bool hasNext() {
        return !st.empty();
    }

private:
    void pushAll(TreeNode* root)
    {
        for(; root!=NULL;st.push(root),root = root -> left);
    }
};