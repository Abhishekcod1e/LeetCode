class Solution {
public:
    void merge(vector<int>&arr,int left ,int mid,int right){
        int i=left;
        int j=mid+1;
        vector<int> temp;
        temp.reserve(right-left+1);
        while(i<=mid && j<=right){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i++]);
            }else{
                temp.push_back(arr[j++]);
            }
        }
        while(i<=mid){
            temp.push_back(arr[i++]);
        }
        while(j<=right){
            temp.push_back(arr[j++]);
        }
        for(int k=0;k<temp.size();k++){
            arr[left+k]=temp[k];
        }
    

    }
    void mergesort(vector<int>&arr,int left,int right){
        if(left>=right){
            return;
        }
        int mid=left+(right-left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);

    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
        
    }
};