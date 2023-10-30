class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> nums;
        for(auto it: arr){
            nums.push_back({__builtin_popcount(it),it});
        }
        sort(begin(nums),end(nums));
        vector<int> ans;
        for(auto it: nums){
            ans.push_back(it.second);
        }
        return ans;
    }
};
