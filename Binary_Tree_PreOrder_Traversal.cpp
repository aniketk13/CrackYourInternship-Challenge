// Recursive

class Solution {
public:
    vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
            return ans;
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return ans;
    }
};

// Iterative

class Solution {
public:
    vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
            return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            ans.push_back(root->val);
            if(root->right!=NULL)
                st.push(root->right);
            if(root->left!=NULL)
                st.push(root->left);
        }
        return ans;
    }
};
