class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        if(nums.empty()) return 0;
        int max=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];

            }
        }
      
        for(int j=0;j<nums.size();j++){
            if(nums[j]>=nums[(j+1)%nums.size()] && max==nums[j]){
                count=nums.size()-(j+1); 
            }
            else if(nums[j]>=nums[(j+1)%nums.size()] && max!=nums[j]){
                return -1;
            }

        }
        return count;
        
    }
};