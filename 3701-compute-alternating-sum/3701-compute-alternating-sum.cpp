class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int esum=0;
        int osum=0;
        int sum;
        int i=0;
        while(i<nums.size()){
            if(i%2!=0){
                osum+=nums[i];
            }
            else{
            esum+=nums[i];}
            i++;
        }
        sum=esum-osum;
        return sum;
        
    }
};