class Solution {
public:  
    vector<int> circularGameLosers(int n, int k) {
        int chk[n+1];
        for(int i=0;i<=n;i++)
            chk[i]=0;
        int j=1;
        int ind=0;
        while(true){
            if(chk[ind]==1)
                break;
            else{
                chk[ind]=1;
            }
            ind=(ind+j*k)%n;
            j++;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
            if(chk[i]==0)
                ans.push_back(i+1);
        return ans;
    }
};
