#include <vector>
long solve(int idx,int* denominations,int value,vector<vector<long>>&dp){
    if(idx==0){
        return (value%denominations[idx]==0);
    }
    if(dp[idx][value]!=-1)
        return dp[idx][value];
    long include=0;
    if(denominations[idx]<=value)
        include=solve(idx,denominations,value-denominations[idx],dp);
    long notInclude=solve(idx-1,denominations,value,dp);

    return dp[idx][value]=include+notInclude;
}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<long>> dp(n+1,vector<long>(value+1,-1));
    return solve(n-1,denominations,value,dp);
}
