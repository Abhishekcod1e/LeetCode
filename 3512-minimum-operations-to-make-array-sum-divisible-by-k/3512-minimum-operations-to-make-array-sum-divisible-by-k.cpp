class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
        int i=0;
        while(true){
            sum=0;
            for(int j=0;j<nums.size();j++){
                sum+=nums[j];
            }
            if(sum%k==0) return count;
            else{
                nums[i]=nums[i]-1;
                count++;
                if(nums[i]==0){
                    i=i+1;
                }
            }


        }
        
    }
};