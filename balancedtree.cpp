int height(TreeNode*root,bool & ans)
    {
if(root==NULL)
        return 0;
        int left= height(root->left,ans);
        int right= height(root->right,ans);
if (abs(left-right)>1)
ans=false;

return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if (root==NULL)
        return true;
      bool ans=true;
       height(root,ans);
     
    
    return ans;
    }
