class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> s1,s2;
        for(auto ch: s){
            if(ch!='#')
                s1.push(ch);
            else if(!s1.empty())
                s1.pop();
        }
        for(auto ch: t){
            if(ch!='#')
                s2.push(ch);
            else if(!s2.empty())
                s2.pop();
        }
        string str1(s1.size(),' '),str2(s2.size(),' ');
        int n=s1.size()-1;
        int m=s2.size()-1;
        while(!s1.empty()){
            str1[n--]=s1.top();
            s1.pop();
        }
        while(!s2.empty()){
            str2[m--]=s2.top();
            s2.pop();
        }
        for(int i=0;i<max(str1.length(),str2.length());i++)
            if(str1[i]!=str2[i])
                return false;
        return true;
    }
};
