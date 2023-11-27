class Solution {
public: 
    int solve(vector<int>& arr,int idx,int n,int &maxi,int mul,vector<vector<int>>&dp){
        if(idx>=n)
            return 0;
        if(dp[idx][mul]!=-1)
            return dp[idx][mul];

        int pick=(arr[idx]*mul)+solve(arr,idx+1,n,maxi,mul+1,dp);
        int notPick=solve(arr,idx+1,n,maxi,mul,dp);
        
        maxi=max(pick,notPick);
        return dp[idx][mul]=maxi;
    }
    int maxSatisfaction(vector<int>& arr) {
        int maxi=0,mul=1;
        sort(begin(arr),end(arr));
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(arr,0,arr.size(),maxi,mul,dp);
        
    }
};
