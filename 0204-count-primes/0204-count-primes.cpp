class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isprime(n+1,true);
        isprime[0]=isprime[1]=false;
        if(n<=2) return 0;
        int count=0;
        for(int i=2;i*i<=n;i++){
            if(isprime[i]){
                for(int j=i*i;j<=n;j+=i){
                    isprime[j]=false;
                }
            }
        }
        for(int o=0;o<n;o++){
            if(isprime[o]==true){
                count++;
            }
        }
        
        return count;
    }
};