class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        int ans=0;

        for(int i=0;i<n;i++){
            vector<int> f(26,0);
            int m=0,d=0;

            for(int j=i;j<n;j++){
                f[s[j]-'a']++;
                if( f[s[j]-'a']==1) d++;
                m=max(m,f[s[j]-'a']);

                if(m*d==(j-i+1)) ans=max(ans,j-i+1);
            }

        }
        return ans;
    }
};