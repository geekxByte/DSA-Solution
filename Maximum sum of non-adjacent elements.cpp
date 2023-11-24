#include <bits/stdc++.h> 
int maximum(int idx,vector<int>&nums,vector<int>&dp){
    if(idx==0) 
        return nums[idx];
    if(idx<0)
        return 0;
    if(dp[idx]!=-1)
        return dp[idx];
    int select=nums[idx]+maximum(idx-2,nums,dp);
    int notSelect=maximum(idx-1,nums,dp);
    return dp[idx]=max(select,notSelect);
}
int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    vector<int> dp(n,-1);
    return maximum(n-1,nums,dp);
}
