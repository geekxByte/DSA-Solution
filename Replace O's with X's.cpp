// User function Template for C++

class Solution{
private:
    void dfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>> mat){
        int n=mat.size();
        int m=mat[0].size();
        vis[row][col]=1;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
            !vis[nrow][ncol] && mat[nrow][ncol]=='O'){
                dfs(nrow,ncol,vis,mat);
            }
        }
    }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int> > vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(i==0 || j==0 || i==n-1 || j==m-1){
                    if(mat[i][j]=='O' && !vis[i][j]){
                        dfs(i,j,vis,mat);
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j]=='O')
                    mat[i][j]='X';
            }
        }
        return mat;
    }
};
