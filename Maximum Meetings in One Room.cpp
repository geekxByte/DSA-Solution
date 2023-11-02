//User function Template for C++

class Solution{
private:
    static bool cmp(pair<int,pair<int,int> > &a,pair<int,pair<int,int> >&b){
        return a.second.second<b.second.second;
    }
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<int,pair<int,int> > > pairs;
        vector<int> ans;
        for(int i=0;i<N;i++){
            pairs.push_back({i+1,{S[i],F[i]}});
        }
        sort(pairs.begin(),pairs.end(),cmp);
        int end=pairs[0].second.second;
        ans.push_back(pairs[0].first);
        for(int i=1;i<N;i++){
            if(pairs[i].second.first>end){
                ans.push_back(pairs[i].first);
                end=pairs[i].second.second;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
