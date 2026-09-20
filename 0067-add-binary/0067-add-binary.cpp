class Solution {
public:
    string addBinary(string a, string b) {
        string h="";
        int sum=0;
        int j=a.size()-1;
        int k=b.size()-1;
        int carry=0;
        while(k>=0 || j>=0 || carry>0){
            sum=carry;
            if(j>=0){
                sum+=a[j]-'0';
                j--;
            }
            if(k>=0){
                sum+=b[k]-'0';
                k--;
            }
            h+=to_string(sum%2);
            carry=sum/2;
        }
        reverse(h.begin(),h.end());
        return h;
       
    }
};