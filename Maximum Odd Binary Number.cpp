class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one=0;
        for(auto &it: s){
            if(it=='1'){
                one++;
                it='0';
            }
        }
        s[s.length()-1]='1';
        one--;
        int i=0;
        while(one>0 && i<s.length()){
            s[i++]='1';
            one--;
        }
        return s;
    }
};
