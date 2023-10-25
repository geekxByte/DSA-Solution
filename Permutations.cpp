class Solution {
private:
    void solve(int idx,vector<int> &nums,vector<vector<int> > &ans){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            solve(idx+1,nums,ans);
            swap(nums[idx],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > ans;
        solve(0,nums,ans);

        return ans;
    }
};
