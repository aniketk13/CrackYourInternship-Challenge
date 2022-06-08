class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPathDown(root,maxi);
        return maxi;
    }
    int maxPathDown(TreeNode* root,int& maxi){
        if(root==NULL)
            return 0;
        int leftsum=max(0,maxPathDown(root->left,maxi));
        int rightsum=max(0,maxPathDown(root->right,maxi));
        maxi=max(maxi,root->val+leftsum+rightsum);
        return root->val+max(leftsum,rightsum);
    }
};
