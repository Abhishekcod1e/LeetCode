class Solution {
public:
    int maximum69Number (int num) {
        int max=num;
        string n=to_string(num);
        string k=n;
        for(int i=0;i<n.size();i++){
            if(k[i]=='9'){
                k[i]='6';
                int d=stoi(k);
                if(d>max){
                    max=d;
                }
                k[i]='9';
            }
            else{
                k[i]='9';
                int l=stoi(k);
                if(l>max){
                    max=l;
                }
                k[i]='6';
                
            }
        }
        return max;

        
    }
};