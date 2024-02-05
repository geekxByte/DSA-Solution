class Solution {
public: 
    string longestPalindrome(string s) {
        int ls=s.size();
        int dp[ls+5][ls+5];
        memset(dp,0,sizeof dp);
        
        int i,j,len;
        int li=-1,ri=-1,val=0;
        for(len=1;len<=ls;len++) {
            for(j=len-1;j<ls;j++) {
                i=j-(len-1);
                j=j;
                
                if(i==j) {
                    dp[i][j]=1;
                    if((j-i+1)>val) {
                        val=(j-i+1);
                        li=i;ri=j;
                    }
                    continue;
                }
                if(i+1==j) {
                    if(s[i]==s[j]) {
                        dp[i][j]=2;
                        if((j-i+1)>val) {
                            val=(j-i+1);
                            li=i;ri=j;
                        }
                    }
                    else dp[i][j]=1;
                    continue;
                }
                
                if(s[i]==s[j]) {
                    if(dp[i+1][j-1]==(j-i-1)) {
                        dp[i][j]=(j-i+1);
                        if((j-i+1)>val) {
                            val=(j-i+1);
                            li=i;ri=j;
                        }
                    }
                    else {
                        dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                        dp[i][j]=max(dp[i][j],dp[i+1][j-1]);
                    }
                }
                else {
                    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                    dp[i][j]=max(dp[i][j],dp[i+1][j-1]);
                }
            }
        }
        string ans="";
        for(i=li;i<=ri;i++) {
            ans+=s[i];
        }
        return ans;
    }
};
