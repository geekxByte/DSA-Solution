class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<float, pair<int, int>>, vector<pair<float, pair<int, int>>>, greater<pair<float, pair<int, int>>>> pq;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=0;j<arr.size();j++){
                if(i==j) continue;
                float val=(float)(arr[i]/(float)arr[j]);
                pq.push({val,{arr[i],arr[j]}});
            }
        }
        k-=1;
        int size=pq.size()-k;
        while(k--){
            pq.pop();
        }
        int a=pq.top().second.first;
        int b=pq.top().second.second;
        return {a,b};
    }
};
