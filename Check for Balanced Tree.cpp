class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int chkBalanced(Node* root){
        if(root==NULL)
            return 0;
        int lh=chkBalanced(root->left);
            if(lh==-1)  return -1;
        int rh=chkBalanced(root->right);
            if(rh==-1)  return -1;
        if(abs(lh-rh)>1)   return -1;
        return max(lh,rh)+1;
    }
    bool isBalanced(Node *root)
    {

        if(chkBalanced(root)!=-1)
            return true;
        return false;
    }
};
