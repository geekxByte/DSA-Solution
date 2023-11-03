class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int> mpp;
        for(auto it: target)
            mpp[it]++;
        for(auto it: arr)
            mpp[it]--;
        for(auto it: mpp)
            if(it.second!=0)
                return false;
        return true;
    }
};
