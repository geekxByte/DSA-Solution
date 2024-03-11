class Solution{
public:	
	
int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
{
	  int count=0;
    
    int row1=0,row2=n-1,col1=0,col2=n-1;
    while(row1<n&&row2>=0)
    {
     int sum=mat1[row1][col1]+mat2[row2][col2];
     if(sum==x)
     {
         col1++;
         col2--;
         count++;
     }
     else if(sum<x)
        col1++;
     else
        col2--;
       if(col1==n)
       {
           col1=0;
           row1++;
       }
       if(col2==-1)
       {
           col2=n-1;
           row2--;
       }
    }
    return count;
	}
};
