class Solution
{  
    public:
    //Function to check if two strings are rotations of each other or not.
    bool solve(string s1,string s2,int k){
        for(int i=0;i<s1.size();i++){
            if(s2[i]!=s1[(i+k)%s1.size()])
                return false;
        }
        return true;
    }
    bool areRotations(string s1,string s2)
    {
        int k=0;
        for(auto it: s1){
            if(it==s2[0])
                if(solve(s1,s2,k))
                    return true;
            k++;
        }
        return false;
    }
};
