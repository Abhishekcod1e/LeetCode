class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        sort(nums.begin(),nums.end());
        int k=nums[1]-nums[0];
        if(nums.size()==2) return k;
        int i=2;
        while(i<nums.size()){
            int l=nums[i]-nums[i-1];
            if(k<l){
                k=l;
            }
            i++;
        }
        return k;
        
    }
};