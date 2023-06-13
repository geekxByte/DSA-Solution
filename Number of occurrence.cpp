//User function template for C++
class Solution{
public:	
	int firstOcc(int* arr,int n,int x){
	    int start=0,end=n-1,ans=-1;
	    while(start<=end){
	        int mid=start+(end-start)/2;
	        if(arr[mid]==x){
	            ans=mid;
	            end=mid-1;
	        }
	        else if(x>arr[mid])
	            start=mid+1;
	        else
	            end=mid-1;
	    }
	    return ans;
	}
	int lastOcc(int* arr,int n,int x){
	    int start=0,end=n-1,ans=-1;
	    while(start<=end){
	        int mid=start+(end-start)/2;
	        if(arr[mid]==x){
	            ans=mid;
	            start=mid+1;
	        }
	        else if(x>arr[mid])
	            start=mid+1;
	        else
	            end=mid-1;
	    }
	    return ans;
	}
	int count(int arr[], int n, int x) {
	    int ans1=firstOcc(arr,n,x);
	    int ans2=lastOcc(arr,n,x);
	    if(ans1==-1 || ans2==-1)
	        return 0;
	    return ans2-ans1+1;
	}
};
