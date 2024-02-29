class Solution{
public:
	long long sumBitDifferences(int arr[], int n) {
	    long ans=0;
        for(int j=0;j<32;j++){
            int one=0;
            int zero=0;
            for(int i=0;i<n;i++){
                if(arr[i]%2==0) zero++;
                else one++;
                arr[i]=arr[i]/2;
            }
            ans+=(long)one*zero;
        }
        return (long)ans*2;
	}
};
