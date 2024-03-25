class Solution{
public:	
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string>v;
    for(int i=pow(2,n)-1;i>=pow(2,n-1);i--){
        string st="";
        int k=i;
        int c1=0,c0=0,flag=0;
        for(int j=0;j<n;j++){
            int x=k&1;
            st+=x+'0';
            k=k>>1;
        }
        
        reverse(st.begin(),st.end());
        for(int j=0;j<st.size();j++){
            if(st[j]=='1'){
                c1++;
            }
            else{
                c0++;
            }
            if(c0>c1){
                flag=1;
                break;
            }
        }
        if(flag==0){
            v.push_back(st);
        }
        
    }
    return v;
	}
};
