class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int l=num;
        while(num>0){
            int ldig=num%10;
            if(l%ldig==0){
                count++;
            }
            num=num/10;
        }
        return count;
        
    }
};