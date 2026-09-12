class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>> mpp;
        int count=0;
        int count2=0;
        int sp=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]].push_back(i);
        }
        for(auto &[num,indices]:mpp){
            count=0;
            count2=indices.size();
            if(indices.size()>=3){
            for(int i=2;i<indices.size();i++){
                if((indices[i]-indices[i-1])==(indices[i-1]-indices[i-2])){
                    count++;
                }
                if((count+2)==count2){
                    sp++;
                    
                }


            }
            }

        }
        return sp;
    }
        
        
};