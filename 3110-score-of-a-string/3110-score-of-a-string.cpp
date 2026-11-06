class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=0;i<s.size()-1;i++){
           int ch=int(s[i]);
           int ch1=int(s[i+1]);
           if(ch<ch1){
              score+=ch1-ch;
           }
           else{
            score+=ch-ch1;
           }
           

        }
        return score;
        
    }
};