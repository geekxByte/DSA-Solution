class Solution{
    public:
    int search(int arr[], int l, int h, int key){
        int s=l,e=h;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==key)
                return mid;
            if(arr[s]<=arr[mid]){
                if(arr[s]<=key && key<=arr[mid])
                    e=mid-1;
                else
                    s=mid+1;
            }
            else{
                if(arr[mid]<=key && key<=arr[e])
                    s=mid+1;
                else
                    e=mid-1;
            }
        }
        return -1;
    }
};
