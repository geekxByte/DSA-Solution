class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL)
            return {};
        int max=INT_MIN;
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp==NULL){
                ans.push_back(max);
                max=INT_MIN;
                if(!q.empty())
                    q.push(NULL);
            }
            else{
                if(max<temp->val)
                    max=temp->val;
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
        }
        return ans;
    }
};
