class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> arr;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>nums.size()/3){
                if(find(arr.begin(),arr.end(),nums[i])==arr.end()){
                    arr.push_back(nums[i]);
                }
            }
        }
        
        return arr;}
        
};