class Solution {
public:
    bool checkDivisibility(int n) {
        long long product=1;
        long long sum=0;
        int k=n;
        while(n>0){
            int ldigit=n%10;
            product*=ldigit;
            sum+=ldigit;
            n=n/10;

        }
        if(k%(product+sum)==0){
            return true;
        }
        else{
            return false;
        }
        
    }
};