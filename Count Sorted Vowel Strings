class Solution {
public:
    int solve(vector<char>&str,int idx,int n,vector<vector<int>>&dp){
        if(n==0)
            return 1;
        if(idx>=str.size())
            return 0;
        if(dp[idx][n]!=-1)
            return dp[idx][n];
        
        int Pick=solve(str,idx+1,n,dp);
        int notPick=solve(str,idx,n-1,dp);

        return dp[idx][n]=notPick+Pick;
    }

    int countVowelStrings(int n) {
        vector<char> str={'a','e','i','o','u'};
        vector<string> ans;
        string temp;
        int s=str.size();
        vector<vector<int>> dp(s,vector<int>(n+1,-1));
        return solve(str,0,n,dp);
        
    }
};
