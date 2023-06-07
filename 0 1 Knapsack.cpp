#include <bits/stdc++.h> 
int solve(int idx,vector<int>&weight,vector<int>&value,int maxWeight,vector<vector<int>>&dp){
  if (idx == 0) {
	  if(weight[idx]<=maxWeight)
    		return value[0];
      else return 0;
  }
  if(dp[idx][maxWeight]!=-1)
	return dp[idx][maxWeight];
    int include=INT_MIN;
	if(weight[idx]<=maxWeight)
		include=value[idx]+solve(idx-1,weight,value,maxWeight-weight[idx],dp);
	int notInclude=solve(idx-1,weight,value,maxWeight,dp);
	return dp[idx][maxWeight]=max(include,notInclude);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>>dp(n+1,vector<int>(maxWeight+1,-1));
	return solve(n-1,weight,value,maxWeight,dp);
}
