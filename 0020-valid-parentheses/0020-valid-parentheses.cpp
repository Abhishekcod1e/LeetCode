class Solution {
public:
    bool isValid(string s) {
        stack<char>j;
        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                j.push(c);
            }
            else{
                if(j.empty())return false;
                char top=j.top();
                if(c==')' && top!='(' || c=='}' && top!='{' || c==']' && top!='['){
                    return false;
                }
                j.pop();
            }
        } 
        return j.empty();
    }
};