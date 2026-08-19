class Solution {
public:
    long long rangeBitwiseAnd(long long left, long long right) {
        while(right>left){
            right=right & (right-1);
        }
        return right;

        
    }
};