class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        vector<int> arr;
        int high=nums.size()-1;
        int f=-1;
        int l=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target ){
                f=mid;
                high=mid-1;
                
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
         }
         low=0;
         high=nums.size()-1;
         while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target ){
                l=mid;
                low=mid+1;
                
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }}
        arr.push_back(f);
        arr.push_back(l);
         if(arr.empty()) return {-1,-1};

    return arr;
    }
};