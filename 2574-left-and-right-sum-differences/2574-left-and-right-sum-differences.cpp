class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> lefts;
        int lsum=0;
        int rsum=0;
        lefts.push_back(0);
        vector<int> rights;
        vector<int> fin;
        int i=0;
        for(i=0;i<nums.size()-1;i++){
            lsum+=nums[i];
            lefts.push_back(lsum);
          

        }
        rsum=lsum+nums[i];
        for(int i=0;i<nums.size()-1;i++){
            rsum=rsum-nums[i];
            rights.push_back(rsum);

        }
        rights.push_back(0);
        int difference=0;
        for(int i=0;i<nums.size();i++){
            difference=abs(lefts[i]-rights[i]);
            fin.push_back(difference);
        }    
        return fin; 
    }
};