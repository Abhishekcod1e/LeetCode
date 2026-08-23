class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n%2==0) return false;
        int count=-1;
        int k=n;
        while(n!=0){
            n=n/3;
            count++;
        }
        if(pow(3,count)==k){
            return true;

        }
        return false;
    }
    
};