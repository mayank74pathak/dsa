int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxpath(root,maxi);
    return maxi;
    }
int maxpath(TreeNode*root,int &maxi)
{
if(!root)
{
    return 0;
}
int left=max(0,maxpath(root->left,maxi));
int right=max(0,maxpath(root->right,maxi));
maxi= max(maxi,left+right+root->val);
return max(left,right)+root->val;
}
