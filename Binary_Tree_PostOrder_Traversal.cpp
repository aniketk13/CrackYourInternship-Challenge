// Recursive

class Solution {
public:
    vector<int>ans;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root){
            postorderTraversal(root->left);            
            postorderTraversal(root->right);
            ans.push_back(root->val);
        }
        return ans;
    }
};

// Iterative

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* cur=root;
        stack<TreeNode*> st;
        while(cur!=NULL || !st.empty()){
            if(cur!=NULL){
                st.push(cur);
                cur=cur->left;
            }
            else{
                TreeNode* temp=st.top()->right;
                if(temp==NULL){
                    temp=st.top();
                    st.pop();
                    ans.push_back(temp->val);
                    while(!st.empty() && temp==st.top()->right){
                        temp=st.top();
                        st.pop();
                        ans.push_back(temp->val);
                    }
                }
                else
                    cur=temp;
            }
        }
        return ans;
    }
};
