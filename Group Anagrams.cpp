class Solution {
public:
    map<string, int> mp;
    static bool cmp(string s1, string s2){
        return s1<s2;
    } 
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        mp.clear();
        vector<vector<string>> ans;
        ans.clear();  
        sort(strs.begin(), strs.end(), cmp);     
        int indx = 0;
        vector<string> grp;     
        for(int i=0; i<strs.size();i++)
        {
            grp.clear();
            
            string sNow = strs[i];
            sort(sNow.begin(), sNow.end());  
            if(mp[sNow] == 0)
            {
                mp[sNow] = ++indx;
                grp.push_back(strs[i]);
                ans.push_back(grp);
            }
            else
            {
                ans[ mp[sNow]-1].push_back(strs[i]);
            }   
        }
        return ans;   
    }
};
