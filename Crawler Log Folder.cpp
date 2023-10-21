class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt=0;
        for(auto word: logs){
            if(word=="../"){
                cnt--;
                if(cnt<0)
                    cnt=0;
            }
            else if(word=="./")
                continue;
            else
                cnt++;
        }
        if(cnt>0)
            return cnt;
        return 0;
    }
};
