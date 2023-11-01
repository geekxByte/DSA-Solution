class Solution {
public:
    void solve(TreeNode* root,map<int,int>& mpp){
        if(root==NULL)
            return;
        solve(root->left,mpp);
        mpp[root->val]++;
        solve(root->right,mpp);
    }
    vector<int> findMode(TreeNode* root) {
        map<int,int> mpp;
        solve(root,mpp);
        vector<int> ans;
        int maxi=INT_MIN;
        for(auto it: mpp){
            if(it.second>maxi){
                ans.clear();
                ans.push_back(it.first);
                maxi=it.second;
            }
            else if(it.second==maxi)
                ans.push_back(it.first);
        }
        return ans;
    }
};
