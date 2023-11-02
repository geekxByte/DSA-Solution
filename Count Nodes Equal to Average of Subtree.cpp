class Solution {
public:
    int avg(TreeNode* root,int& sum,int &size){
        if(root==NULL)
            return 0;
        sum+=root->val;
        size++;
        avg(root->left,sum,size);
        avg(root->right,sum,size);

        return sum;
    }
    void solve(TreeNode* root,int& cnt){
        if(root==NULL)
            return;
        int size=0;
        int sum=0;
        sum=avg(root,sum,size);
        if(sum/size==root->val)
            cnt++;
        solve(root->left,cnt);
        solve(root->right,cnt);
    }
    int averageOfSubtree(TreeNode* root) {
        int cnt=0;
        solve(root,cnt);
        return cnt;
    }
};
