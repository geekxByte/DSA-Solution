class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        vector<int>arr;
        while(x){
            arr.push_back(x&1);
            x>>=1;
        }
        for(int i=arr.size();i<32;i++){
            arr.push_back(0);
        }
        long long ans=0;
        for(int i=31,j=0;i>=0;i--,j++){
            ans+=arr[j]*pow(2,i);
        }
        return ans;
    }
};
