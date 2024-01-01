class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        string ans=""; 
        vector<char>v;
        for(int i=0;i<=S.size();i++) v.push_back(i+1+'0');
        for(int i=1;i<v.size();++i){
            if(S[i-1]=='D'){
                int j=i;
                while((j-1)<S.size() && S[j-1]=='D') j++;
                int start=i-1,end=j-1;
                while(start<end)swap(v[start++],v[end--]);
                i=j-1;
            }
        }
        for(int i=0;i<v.size();++i) ans.push_back(v[i]);
        return ans;
    }
};
