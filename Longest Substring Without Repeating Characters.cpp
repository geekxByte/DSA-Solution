class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,maxi=INT_MIN;
        unordered_map<char,int> mpp;
        if(s.length()<=1) return s.length();
        while(j<s.length()){
            mpp[s[j]]++;
            if(mpp.size()==j-i+1){
                maxi=max(maxi,j-i+1);
                j++;
            }
            else if(mpp.size()<j-i+1){
                while(mpp.size()<j-i+1){
                    mpp[s[i]]--;
                    if(mpp[s[i]]==0)
                        mpp.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};
