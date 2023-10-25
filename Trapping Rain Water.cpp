class Solution {
public:
    int trap(vector<int>& height) {
        int maxi=INT_MIN;
        int n=height.size();
        int prefix[n],suffix[n];
        for(int i=0;i<n;i++){
            maxi=max(maxi,height[i]);
            prefix[i]=maxi;
        }
        maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,height[i]);
            suffix[i]=maxi;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=min(suffix[i],prefix[i])-height[i];
        }
        return sum;
    }
};
