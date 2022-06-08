// Recursive

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL)
            return (p==q);
        
        return (p->val==q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};

// Iterative(Using Level Order Traversal)

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p || !q)
            return (p==q);
        queue<TreeNode*>Q;
        Q.push(p);Q.push(q);
        while(!Q.empty()){
            TreeNode* first=Q.front(); Q.pop();
            TreeNode* second=Q.front();Q.pop();
            if(!first && !second)
                continue;
            if(!first || !second)
                return false;
            if(first->val != second->val)
                return false;
            Q.push(first->left);
            Q.push(second->left);
            Q.push(first->right);
            Q.push(second->right);
        }
        return true;
    }
};
