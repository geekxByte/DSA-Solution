class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
       priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>>pq;

        for(int i = 0 ; i < nums.size() ;i++)
        {
            int len = nums[i].size();
            pq.push({len,nums[i]});
            if(pq.size() > k)
                pq.pop();
        }
       return  pq.top().second;
    }
};
