class Solution {
public: 
    vector<int> findArray(vector<int>& pref) {
        vector<int> pre(pref.size());
        pre[0]=pref[0];
        for(int i=1;i<pref.size();i++){
            pre[i]=pref[i]^pref[i-1];
        }
    return pre;
    }
};
