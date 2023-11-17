class Solution {
  public: 
    vector<int> topK(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        
        for(auto i: nums)
        {
            mp[i]++;
        }
        
        for(auto i: mp)
        {
            pq.push({i.second, i.first});
        }
        
        while(!pq.empty() && k-- )
        {
            int top=pq.top().second;
            pq.pop();
            
            ans.push_back(top);
        }
        
        return ans;
    }
};
