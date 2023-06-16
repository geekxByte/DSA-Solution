class Solution {
public:
    bool isFascinating(int n) {
        int multiof2=2*n;
        int multiof3=3*n;
        unordered_map<int,int> mpp;
        while(n>0 || multiof2>0 || multiof3>0){
            mpp[n%10]++;
            mpp[multiof2%10]++;
            mpp[multiof3%10]++;
            if(mpp[n%10]>1 || mpp[multiof2%10]>1 || mpp[multiof3%10]>1 || n%10==0 || multiof2%10==0 || multiof3%10==0){
                return false;
            }
            n/=10;
            multiof2/=10;
            multiof3/=10;
        }
        return true;
    }
};
