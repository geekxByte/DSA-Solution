class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int diff;
        
        if(nums[nums.size()-1]-k>=nums[0]+k){
            diff=(nums[nums.size()-1]-k)-(nums[0]+k);
        }
        else{
            int fl=nums[nums.size()-1]-nums[0]+k;
            diff=nums[nums.size()-1]-fl-nums[0]+k;
        }
        return diff;
    }
};
