class Solution {
public:
    int findGCD(vector<int>& nums) {
        return __gcd(*min_element(begin(nums),end(nums)),*max_element(begin(nums),end(nums)));
    }
};
