class Solution
{
public:
        int mxVal;
        int mxLvl;
      void dfs(Node* root, int lvl, int sum)
        {
            if(root == nullptr)
                return;
        if(root->left == nullptr && root->right == nullptr)
        {
            if(lvl > mxLvl)
            {
                mxVal = sum + root->data;
                mxLvl = lvl;
            }
            else if(lvl == mxLvl)
                mxVal = max(sum + root->data, mxVal);
        }
        
        dfs(root->left,lvl + 1, sum + root->data);
        dfs(root->right,lvl + 1, sum + root->data);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        mxVal = -1;
        mxLvl = 0;
        
        dfs(root,0,0);
        
        return mxVal;
    }
};
