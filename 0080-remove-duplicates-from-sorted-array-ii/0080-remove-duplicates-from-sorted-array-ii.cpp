class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int k=0;
        int i=0;
        while(i<nums.size()){
            if(i>0 && nums[i]==nums[i-1]) count++;
            else count=1;
            if(count<=2){
                nums[k]=nums[i];
                k++;
            }
            i++;
        }
        return k;
    }
};