class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        int i=1;
        string k=to_string(n);
        int j=k.size();
        while(n>0){
            if(j%2==0){
                i=-i;
            int lastdigit=n%10;
            sum=sum+i*lastdigit;
            n=n/10;
            }
            else{
                int lastdigit=n%10;
                sum=sum+i*lastdigit;
                n=n/10;
                i=-i;

            }

        }
        return sum;
        
    }
};