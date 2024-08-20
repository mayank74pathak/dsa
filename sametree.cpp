bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL and q ==NULL)
        return true;
        else if(p==NULL and q!=NULL)
         return false;
        else if(p!=NULL and q==NULL)
        return false;
        if (p->val == q->val) {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }  
    return false;
    }
