class Solution {
public:
    void heapify(vector<int>&arr,int l){
        int largest=l;
        int right=2*l+2;
        int left=2*l+1;
        if(left<arr.size() && arr[left]>arr[largest]){
            largest=left;
        }
        if(right<arr.size() && arr[right]>arr[largest]){
            largest=right;
        }
        if(largest!=l){
            int temp=arr[l];
            arr[l]=arr[largest];
            arr[largest]=temp;
            heapify(arr,largest);
        }

    }
    void buildmaxheap(vector<int>&arr){
        for(int i=(arr.size()/2)-1;i>=0;i--){
            heapify(arr,i);
        }

    }
    int extractmax(vector<int>&arr){
        int n=arr.size();
        int temp=arr[0];
        arr[0]=arr[n-1];
        arr.resize(n-1);
        heapify(arr,0);
        return temp;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int required;
        int n=nums.size();
        if(k >n){
            return -1;
        }
        buildmaxheap(nums);
        for(int i=1;i<=k;i++){
            if(i==k){
                     required=extractmax(nums);
                
            }
            else{
                extractmax(nums);
            }


        }
        return required;
        
        
        
    }
};