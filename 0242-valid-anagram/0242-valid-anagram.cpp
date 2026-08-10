class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()<t.size() || s.size()>t.size()) return false;
        int j=0;
        for(int i=0;i<s.size();i++){
            size_t l=t.find(s[i]);
            if(l!= string::npos){
                t[l]='0';
                j++;
                }
            }


        if(j==s.size()){
            return true;
        }
        else{
            return false;
        }

        
    }
};