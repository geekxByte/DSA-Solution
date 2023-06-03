class Solution {
private:
    int solve(int i,int j,vector<int>& nums,vector<vector<int> >& dp){
        if(i==0){
            if(j==0 && nums[0]==0)
                return 2;
            if(j==0 || j==nums[0])
                return 1;
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int exclude=solve(i-1,j,nums,dp);
        int include=0;
        if(nums[i]<=j)
            include=solve(i-1,j-nums[i],nums,dp);
        return dp[i][j]=include+exclude;
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        for(auto &it: nums){
            sum+=it;
        }
        if(sum-target<0) return 0;
        if((sum-target)%2==1) return 0;
        int tar=(sum-target)/2;
        vector<vector<int> > dp(n,vector<int>(tar+1,-1));
        return solve(n-1,tar,nums,dp);
    }
};
