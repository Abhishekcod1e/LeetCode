class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size()==1)return nums[0];
        sort(nums.begin(),nums.end());
        int k=(nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
        return k;
        
    }
};