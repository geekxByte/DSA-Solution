class Solution {
public:
    int sum[10001];
    int dp[20001];
    int helper(int i, int &maximum){
        if(i>maximum)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int taken=helper(i+2, maximum)+sum[i];
        int notTaken=helper(i+1,maximum);
        return dp[i]=max(taken, notTaken);
    }
    int deleteAndEarn(vector<int>& nums) {
        memset(sum, 0, sizeof sum);
        memset(dp, -1, sizeof dp);
        int n=nums.size();
        int maximum=INT_MIN;
        for(int i=0;i<n;i++){
            maximum=max(maximum, nums[i]);
            sum[nums[i]]+=nums[i];
        }
        return helper(1, maximum);
    }
};
