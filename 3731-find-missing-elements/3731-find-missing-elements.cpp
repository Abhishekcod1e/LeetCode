class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if(nums.empty()) return nums;
        sort(nums.begin(),nums.end());
        vector<int> go;
        vector<int> hg; 
        int min=nums[0];
        int max=nums[nums.size()-1] ;     
        while(min<=max){
            go.push_back(min);
            min=min+1;
            }
        int i=0;
        int j=0;
        while(i<nums.size() && j<go.size() ){
            if(nums[i]==go[j]){
            i++;
            j++;
            }
            else if(nums[i]<go[j]){
               i++;
            }
            else{
                hg.push_back(go[j]);
                j++;
            }
        }
        return hg;
        
       
    }
};