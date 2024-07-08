int diameterOfBinaryTree(TreeNode* root) {
        int ans=0; 
        getDiameter(root,ans);
        return ans-1;
    }
    int getDiameter(TreeNode*root,int &ans)
    {
        if(root==NULL)
        return 0;
        int left=getDiameter(root->left,ans);
        int right=getDiameter(root->right,ans);
        ans=max(ans,left+right+1);
        return max(left,right)+1;
    }
