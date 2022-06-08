class Solution {
public:
bool isLeaf(Node *root){
    return (!root->left && !root->right);
}
void addLeftBoundary(Node *root,vector<int>& ans){
    Node* cur=root->left;
    while(cur){
        if(!isLeaf(cur))
            ans.push_back(cur->data);
        if(cur->left)
            cur=cur->left;
        else
            cur=cur->right;
    }
    
}
void addLeaves(Node *root,vector<int> &ans){
    if(isLeaf(root)){
        ans.push_back(root->data);
        return;
    }
    if(root->left)
        addLeaves(root->left,ans);
    if(root->right)
        addLeaves(root->right,ans);
}
void addRightBoundary(Node *root,vector<int> &ans){
    stack<Node*> st;
    Node *cur=root->right;
    while(cur){
        if(!isLeaf(cur))
            st.push(cur);
        if(cur->right)
            cur=cur->right;
        else
            cur=cur->left;
    }
    while(!st.empty()){
        ans.push_back(st.top()->data);
        st.pop();
    }
}
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        //Your code here
        if(!root)
            return ans;
        if(!isLeaf(root))
            ans.push_back(root->data);
        addLeftBoundary(root,ans);
        addLeaves(root,ans);
        addRightBoundary(root,ans);
        
        return ans;
    }
};
