class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int i=0;
        int count=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                int lastdigit=nums[i]%10;
                if(lastdigit==digit){
                    count++;
                }
                nums[i]=nums[i]/10;
            }
            else{
                i++;
            }

        }
        return count;
        
    }
};