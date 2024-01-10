class Solution {
public:  
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int prevofprev=0;
        for(int i=1;i<n;i++){
            int include=nums[i];
            if(i>1)
                include+=prevofprev;
            int notInclude=0+prev;
            int curr=max(include,notInclude);
            prevofprev=prev;
            prev=curr;
        }
        return prev;
    }
};
