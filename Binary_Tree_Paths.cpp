class Solution {
public:
    bool findPath(TreeNode* root,vector<string>& ans,string str){
        if(!root)
            return false;
        str+=to_string(root->val);
        if(!root->left && !root->right)
        {
            ans.push_back(str);
            return true;
        }
        findPath(root->left,ans,str+"->");
        findPath(root->right,ans,str+"->");
        return false;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(!root)
            return ans;
        findPath(root,ans,"");
        return ans;
    }
};
