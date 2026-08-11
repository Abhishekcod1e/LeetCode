class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        char str;
        while(i<j){
            str=s[i];
            s[i]=s[j];
            s[j]=str;
            i++;
            j--;  
        }
    }
};