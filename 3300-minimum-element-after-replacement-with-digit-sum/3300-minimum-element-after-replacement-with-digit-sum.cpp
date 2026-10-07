class Solution {
public:
    int minElement(vector<int>& nums) {
        int k=0;
        int sum=0;
        while(k<nums.size()){
            int lastdigit=nums[k]%10;
            sum+=lastdigit;
            nums[k]=nums[k]/10;
            if(nums[k]==0){
                nums[k]=sum;
                sum=0;
                k++;
            }
        }
            int min=nums[0];
            for(int i=0;i<nums.size();i++){
                if(nums[i]<min){
                    min=nums[i];

                }
            }

        
        return min;
        
    }
};