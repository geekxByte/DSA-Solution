class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        int a=0,b=1;
        vector<int>v(n+1);
        v[0]=a;
        v[1]=b;
        int mod=1e9+7;
        for(int i=2;i<n+1;i++){
            int c=(a+b)%mod;
            a=b;
            b=c;
            v[i]=c;
        }
        return v;
    }
};
