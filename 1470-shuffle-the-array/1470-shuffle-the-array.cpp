class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> b;
        vector<int> k;
        for(int i=0;i<n;i++){
            b.push_back(nums[i]);
        }
        for(int j=n;j<nums.size();j++){
            k.push_back(nums[j]);
        }
        int m=0;
        int g=-1;
        int v=-1;
        while(m<nums.size() ){
            if(m%2==0 && g<=n){
                g++;
                nums[m]=b[g];
            }
            else{
                v++;
                nums[m]=k[v];
            }
            m++;

        }
        return nums;
        
        
    }
};