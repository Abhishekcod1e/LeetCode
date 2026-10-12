class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> otp;
        int i=0;
        int k=i;
        int count=0;
        while(k<=n){
            if(i==0){
                otp.push_back(count);
                k++;
                i=k;
                count=0;
            }
            count+=i&1;
            i=i>>1;
        }
        return otp;
    }
};