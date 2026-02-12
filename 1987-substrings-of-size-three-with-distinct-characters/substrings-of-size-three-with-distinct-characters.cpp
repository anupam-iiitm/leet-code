class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int ans=0;

        for(int i=0;i<n-2;i++){
            vector<int> f(26,0);
            int d=0;

            for(int j=i;j<i+3;j++){
                f[s[j]-'a']++;
                if(f[s[j]-'a']==1) d++;
            }
            if(d==3)ans++; 
        }
        return ans;
    }
};