class Solution {
public:
    int smallestNumber(int n, int t) {
        int k=n;
        int product=1;
        while(n>0){
            int lastdigit=n%10;
            n=n/10;
            product=product*lastdigit;
            if(product%t==0 && n==0){
                return k;
            }
            if(n==0){
              k=k+1;
              n=k;
              product=1;
            }
        }
        return k;
        
    }
};