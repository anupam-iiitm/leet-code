class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> f;
        int l=0,r=0;
        int best=0;
        while(r<s.length()){
            f[s[r]]++;
            while(f[s[r]]>1){
                f[s[l]]--;
                l++;
            }
            best=max(best,r-l+1);
            r++;
        }
        return best;
    }
};