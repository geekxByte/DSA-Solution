class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        map<TreeNode*,int> parent;
        queue<TreeNode*> q;
        q.push(root);
        parent[root]=-1;
        int sum=0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(parent[node]%2==0){
                    if(node->left)
                        sum+=node->left->val;
                    if(node->right)
                        sum+=node->right->val;
                }
                if(node->left){
                    parent[node->left]=node->val;
                    q.push(node->left);
                }
                if(node->right){
                    parent[node->right]=node->val;
                    q.push(node->right);
                }
            }
        }
        return sum;
    }
};
