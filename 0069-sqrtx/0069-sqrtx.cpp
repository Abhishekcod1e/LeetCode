class Solution {
public:
    int mySqrt(long long x) {
        if(x==1) return 1;
        for(long long i=0;i<=x;i++){
            long long sqr=i*i;
            if(sqr>x){
                return i-1;
            }
        }
    return 0;
    }
};