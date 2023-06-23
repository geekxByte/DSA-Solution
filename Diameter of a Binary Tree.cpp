class Solution {
  public:
    int findDiameter(Node* root,int& maxi){
        if(root==NULL)
            return 0;
        int lh=findDiameter(root->left,maxi);
        int rh=findDiameter(root->right,maxi);
        maxi=max(maxi,lh+rh+1);
        return 1+max(lh,rh);
    }
    int diameter(Node* root) {
        int maxi=INT_MIN;
        findDiameter(root,maxi);
        return maxi;
    }
};
