class Solution {
public:  
    void dfs(int node,vector<vector<int>>& graph,vector<vector<int>>& ans,vector<int> temp,int d){
        //vis[node]=1;
        temp.push_back(node);
        if(node==d){
            ans.push_back(temp);
        }
        for(auto it: graph[node]){
            dfs(it,graph,ans,temp,d);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int s=0,d=graph.size()-1;
        vector<vector<int>> ans;
        vector<int> temp;
        dfs(s,graph,ans,temp,d);
        return ans;
    }
};
