class Solution {
public:
    void Traverse(TreeNode* root,int& sum){
        if(root==NULL){
            return;
        }
        Traverse(root->right,sum);
        int curr=root->val;
        root->val+=sum;
        sum+=curr;
        Traverse(root->left,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL)
            return NULL;
        int sum=0;
        Traverse(root,sum);
        return root;
    }
};
