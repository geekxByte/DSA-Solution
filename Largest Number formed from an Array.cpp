class Solution{
public:
	static bool mycomp(string &a,string &b){
       string x=a+b;
       string y=b+a;
       return x<y;
    }
    string printLargest(int n, vector<string> &arr) {
        sort(begin(arr),end(arr),mycomp);
        string ans="";
        for(auto i:arr)
            ans=i+ans;
        
        return ans;
    }
};
