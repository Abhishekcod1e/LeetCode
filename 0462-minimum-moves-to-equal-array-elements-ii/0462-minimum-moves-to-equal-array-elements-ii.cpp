class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double sum=0;
        int mid=nums.size()/2;
        double count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[mid]>=nums[i]){
            count+=(nums[mid]-nums[i]);
            }
            else{
                count+=nums[i]-nums[mid];
            }
        }
        return count;


    }
};