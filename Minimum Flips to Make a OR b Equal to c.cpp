class Solution {
public: 
    int minFlips(int a, int b, int c) {
        int cnt=0;
        while(a>0 || b>0 || c>0)
        {
            if(c&1){
                if((a&1)==0 && (b&1)==0)
                    cnt++;
            }
            else {
                if(a&1)
                    cnt++;
                if(b&1)
                    cnt++;   
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return cnt;
    }
};
