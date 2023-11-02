class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int cnt[n+1]={0};
        for(auto it: arr){
            cnt[it]++;
        }
        int miss=-1,rep=-1;
        for(int i=1;i<=n;i++){
            if(cnt[i]==0)
                miss=i;
            if(cnt[i]>1)
                rep=i;
        }
        return {rep,miss};
    }
};
