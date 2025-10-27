class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m=0,n=0;
        int ans=0;

        for(int i=0;i<bank.size();i++){
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    m++;
                }
            }
            if(m!=0){
                ans=ans+m*n;
               n=m;
               m=0;
            }
            
        }
        return ans;
    }
};