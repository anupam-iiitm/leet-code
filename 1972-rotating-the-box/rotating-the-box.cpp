class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int s=boxGrid[0].size()-1;
        int m = boxGrid.size(), n = boxGrid[0].size();
        vector<vector<char>> box(n, vector<char>(m, '.'));

        for(int i=0;i<m;i++){
            s=n-1;
            for(int j=n-1;j>=0;j--){
                if(boxGrid[i][j]=='#'){
                    box[s][m-i-1]='#';
                    --s;
                }
                else if(boxGrid[i][j]=='*'){
                     box[j][m-i-1]='*';
                    s=j-1;
                }
            }
            
        }
        return box;
    }
};