class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans,lvl=0,maxi=INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int sum=0;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            lvl++;
            if(maxi<sum){
                maxi=sum;
                ans=lvl;
            }
        }
        return ans;
    }
};
