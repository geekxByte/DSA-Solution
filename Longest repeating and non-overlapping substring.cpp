class Solution {
  public:
    string longestSubstring(string s, int n) {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int ans=0;
        int idx=-1;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(s[i-1]==s[j-1] and dp[i-1][j-1]+1<=(j-i)){
                    dp[i][j]=1+dp[i-1][j-1];
                    if(dp[i][j]>ans){
                        ans=dp[i][j];
                        idx=i;
                    }
                }
            }
        }
        string str="";
        for(int i=idx-ans;i<idx;i++){
            str+=s[i];
        }
        return str.size()==0?"-1":str;
    }
};
