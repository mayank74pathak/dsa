//https://www.youtube.com/watch?v=bzF9Ia1XISQ
//there is a error in youtuber code mention in below
void leftree(Node*root,vector<int>&ans)
    {
        if(root==NULL)
        return ;
        if(root->left)
        {
            ans.push_back(root->data);
            leftree(root->left,ans);
            
        }
    
        else if(root->right)
        {
            ans.push_back(root->data);
            leftree(root->right,ans);
        }
    }
    void leaf(Node*root,vector<int>&ans)
    {
        if(root==NULL)
        return ;
        leaf(root->left,ans);
        if(!root->left and !root->right)
        ans.push_back(root->data);
        leaf(root->right,ans);
    }
    void righttree(Node*root,vector<int>&ans)
    {
        if(root==NULL)
        return ;
        if(root->right)
        {
            
            righttree(root->right,ans);
            ans.push_back(root->data);
        }
    
        else if(root->left)
        {
           
            righttree(root->left,ans);
             ans.push_back(root->data);
            
        } 
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
    vector<int>ans;
    ans.push_back(root->data);
     if(!root->left and !root->right)// it must be added for single node
       return ans;
    leftree(root->left,ans);
    leaf(root,ans);
    righttree(root->right,ans);
    
    return ans;    
    }
