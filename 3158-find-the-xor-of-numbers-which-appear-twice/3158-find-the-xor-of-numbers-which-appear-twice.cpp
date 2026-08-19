class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int> mpp;
        int count=0;
        int x=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            count=mpp[nums[i]];
            if(count==2){
                x=x^nums[i];
            }
        }
        return x;
        
    }
};