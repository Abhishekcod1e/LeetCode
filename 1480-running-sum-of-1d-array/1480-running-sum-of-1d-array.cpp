class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> temp;
        if(nums.size()==1) return nums;
        int sum=nums[0];
        temp.push_back(sum);
        for(int i=1;i<nums.size();i++){
            sum=sum+nums[i];
            temp.push_back(sum);
        }
        return temp;
        
    }
};