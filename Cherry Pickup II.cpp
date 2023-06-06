class Solution {
private:
    int solve(int i,int j1,int j2,int r,int c,vector<vector<int>>& grid,
    vector<vector<vector<int>>>&dp){
        if(i<0 || j1<0 || j1>=c || j2<0|| j2>=c)
            return -1e8;
        if(i==r-1){
            if(j1==j2)
                return grid[i][j1];
            else
                return grid[i][j1]+grid[i][j2];
        }
        if(dp[i][j1][j2]!=-1)
            return dp[i][j1][j2];
        int maxi=-1e8;
        int value;
        for(int d1=-1;d1<=1;d1++){
            for(int d2=-1;d2<=1;d2++){
                if(j1==j2)
                    value=grid[i][j1]+solve(i+1,j1+d1,j2+d2,r,c,grid,dp);
                else
                    value=grid[i][j1]+grid[i][j2]+solve(i+1,j1+d1,j2+d2,r,c,grid,dp); 
                maxi=max(maxi,value);
            }
        }
        return dp[i][j1][j2]=maxi;
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return solve(0,0,m-1,n,m,grid,dp);
    }
};
