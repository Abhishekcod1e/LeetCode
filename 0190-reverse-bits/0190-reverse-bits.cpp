class Solution {
public:
            int reverseBits(int n) {
            vector<int>rev;
            int c=32;
            while(c!=0){
                int last=n &1;
                rev.push_back(last);
                n=n>>1;
                c--;
            }
            int revs=0;
            for(int i=rev.size()-1;i>=0;i--){
                revs+=rev[i]*(pow(2,31-i));   
            }
            return revs;

        
    }
};