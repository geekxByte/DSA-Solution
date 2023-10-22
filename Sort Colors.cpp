class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mpp;
        for(auto it: nums)
            mpp[it]++; 
        nums.clear();
        for(auto it: mpp){
            while(it.second!=0){
                nums.push_back(it.first);
                it.second--;
            }
        }
    }
};
