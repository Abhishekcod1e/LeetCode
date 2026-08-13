class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums.size();
        int i=nums[0];
        while(i<=k){
            auto it=find(nums.begin(),nums.end(),i);
            if(it==nums.end()) {return i;}
            i++;
        } 
        return 0;  
        
    }
};