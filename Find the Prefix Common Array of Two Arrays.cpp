class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        map<int,int> mpp;
        for(int i=0;i<A.size();i++){
            int cnt=0;
            mpp[A[i]]++;
            for(int j=0;j<=i;j++){
                if(mpp[B[j]]>0){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
