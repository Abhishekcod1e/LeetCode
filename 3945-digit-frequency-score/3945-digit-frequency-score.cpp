class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> arr;
        map<int,int> mpp;
        int sum=0;
        int lastdigit=0;
        while(n>0){
            lastdigit=n%10;
            arr.push_back(lastdigit);
            n=n/10;
        }
        for(int i:arr){
            mpp[i]++;   
        }
        for( auto & pair:mpp){
            sum+=pair.first*pair.second;
        }
        return sum;
        
    }
};