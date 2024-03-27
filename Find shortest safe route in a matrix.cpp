class Solution
{
public:
    bool isSafe(int x,int y,vector<vector<int>> &mat){
        if(mat[x][y]==0) return false;
        int n = mat.size(), m = mat[0].size();
        int delx[4] = {-1,0,1,0};
        int dely[4] = {0,1,0,-1};
        for(int i=0;i<4;i++){
            int nx = x + delx[i];
            int ny = y + dely[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m){
                if(mat[nx][ny]==0){
                    return false;
                }
            }
        }
        return true;
    }
    int minPath(int x,int y,vector<vector<int>> &mat,vector<vector<int>> &vis,vector<vector<int>> &dp){
        int n = mat.size(), m = mat[0].size();
        if(y==m-1) return 0;
        if(dp[x][y]!=INT_MAX) return dp[x][y];
        int delx[4] = {-1,0,1,0};
        int dely[4] = {0,1,0,-1};
        int result = INT_MAX;
        for(int i=0;i<4;i++){
            int nx = x + delx[i];
            int ny = y + dely[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m && isSafe(nx,ny,mat) && !vis[nx][ny]){
                vis[nx][ny] = 1;
                int subresult = minPath(nx,ny,mat,vis,dp);
                if (subresult != INT_MAX) {
                    result = min(result, 1 + subresult);
                }
                vis[nx][ny] = 0;
            }
        }
        return dp[x][y] = result;
    }
    int findShortestPath(vector<vector<int>> &mat)
    {
        int result = INT_MAX;
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
        for(int i=0;i<n;i++){
            if(isSafe(i,0,mat)){
                vis[i][0] = 1;
                int subresult = minPath(i, 0, mat, vis, dp);
                if (subresult != INT_MAX) {
                    result = min(result, 1 + subresult);
                }
                vis[i][0] = 0;
            }
        }
        return (result == INT_MAX) ? -1 : result;
    }
};
