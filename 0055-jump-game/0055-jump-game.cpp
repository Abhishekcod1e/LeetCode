class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;
        int mreach=0;
        while(i<nums.size()){
            if(i>mreach){
                return false;
            }
            mreach=max(mreach,i+nums[i]);
            if(mreach>=nums.size()-1){
                return true;
            }
            i++;
        }
        return false;
    }
};