class Solution {
public: 
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int v=rooms.size();
        vector<int> adj[v];
        for(int i=0;i<v;i++){
            for(auto it: rooms[i])
                adj[i].push_back(it);
        }
        vector<bool> vis(v,false);
        queue<int> q;
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it: adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it]=true;
                }
            }
        }
        for(int i=0;i<v;i++){
            if(vis[i]==false)
                return false;
        }
        return true;
    }
};
