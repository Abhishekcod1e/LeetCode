class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k=nums.size();
        int j=0;
        int l=nums.size();
        for(int i=0;i<nums.size();i++){
            l=l^nums[i]^j;
            j++;

        }
        return l;  
        
    }
};