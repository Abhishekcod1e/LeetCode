class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int i=0;
        vector<int> tresult;
        vector<int> fresult;
        while(nums[i]>0 && i<nums.size()){
            int lastdigit=nums[i]%10;
            tresult.push_back(lastdigit);
            nums[i]=nums[i]/10;
            if(nums[i]==0){
                i=i+1;
                reverse(tresult.begin(),tresult.end());
                fresult.insert(fresult.end(),tresult.begin(),tresult.end());
                if(i==nums.size())break;
                vector<int> j;
                tresult=j;
            }

        }
        return fresult;
        
    }
};