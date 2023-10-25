class Solution {
private:
    void solve(set<vector<int> >& ans,int idx,vector<int> nums){
        if(idx>=nums.size()){
            ans.insert(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            solve(ans,idx+1,nums);
            swap(nums[idx],nums[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int> > ans;
        vector<vector<int> > output;
        
        solve(ans,0,nums);
        for(auto it: ans){
            vector<int> temp;
            for(auto i: it){
                temp.push_back(i);
            }
            output.push_back(temp);
        }
        return output;
    }
};
