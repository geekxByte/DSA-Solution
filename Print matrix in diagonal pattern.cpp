class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         int n=mat.size(),row=0,col=0;
         vector<int >ans;
         bool isReverse=false;
         while(col<n){
             int i=row,j=col;
             vector<int>temp;
             while(i<n and j<n and i>=0 and j>=0){
                 temp.push_back(mat[i][j]);
                 i--;
                 j++;
                 
             }
             if(isReverse) reverse(temp.begin(),temp.end());
             ans.insert(ans.end(),temp.begin(),temp.end());
             if(row!=n-1){
                 row++;
                 col=0;
             }
             else{
                 col++;
                 
             }
             isReverse=!isReverse;
             
         }
         return ans;
    }
