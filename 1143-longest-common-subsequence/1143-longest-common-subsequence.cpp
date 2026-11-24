class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int x=text1.size();
        int y=text2.size();
        vector<vector<int>> LCS(x+1,vector<int>(y+1,0));
        for(int i=1;i<=x;i++){
          for(int j=1;j<=y;j++){
              if(text1[i-1]==text2[j-1]){
                    LCS[i][j]=1+LCS[i-1][j-1];
              }
              else{
                 LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
              }  
          }
        }
        return LCS[x][y];



        
    }
};