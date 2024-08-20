 bool isMirror(TreeNode*left,TreeNode*right)
    {
        if(!left and !right)
        return true;
        if(!left or !right)
        return false;
        return (left->val==right->val) and isMirror(left->left,right->right) and isMirror(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return isMirror(root->left,root->right);
    }
