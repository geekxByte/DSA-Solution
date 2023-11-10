

class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int> ans;
        int n=matrix[0].size();
        bool trav=true;
        for(int i=0;i<n;i++){
            if(trav){
                int k=0;
                while(k<n){
                    ans.push_back(matrix[i][k]);
                    k++;
                }
                trav=false;
                
            }
            else{
                int k=n-1;
                while(k>=0){
                    ans.push_back(matrix[i][k]);
                    k--;
                }
                trav=true;
            }
        }
        return ans;
    }
};
