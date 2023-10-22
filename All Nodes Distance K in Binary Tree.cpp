class Solution {
private:
    void Parent(TreeNode* root,map<TreeNode*,TreeNode*>& mpp){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node->left){
                mpp[node->left]=node;
                q.push(node->left);
            }
            if(node->right){
                mpp[node->right]=node;
                q.push(node->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*> mpp;
        Parent(root,mpp);
        queue<TreeNode*> q;
        map<TreeNode*,bool> vis;
        q.push(target);
        vis[target]=1;
        int dist=0;
        while(!q.empty()){
            int n=q.size();
            if(dist++==k) break;
            for(int i=0;i<n;i++){
                TreeNode* node= q.front();
                q.pop();
                if(node->left && !vis[node->left]){
                    vis[node->left]=1;
                    q.push(node->left);
                }
                if(node->right && !vis[node->right]){
                    vis[node->right]=1;
                    q.push(node->right);
                }
                if(mpp[node] && !vis[mpp[node]]){
                    vis[mpp[node]]=1;
                    q.push(mpp[node]);
                }
            }
        }
        vector<int> ans;
        while(!q.empty()){
            TreeNode* temp=q.front();
            ans.push_back(temp->val);
            q.pop();
        }
        return ans;
    }
};
