class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> sc1(26,0);
        vector<int> sc2(26,0);
        if(s1.length()>s2.length()) return false;
        for(int i=0;i<s1.length();i++){
            sc1[s1[i]-'a']++;
            sc2[s2[i]-'a']++;
        }
        if(sc1==sc2) return true;

        for(int i=s1.length();i<s2.length();i++){
            sc2[s2[i]-'a']++;
            sc2[s2[i-s1.length()]-'a']--;
            if(sc1==sc2) return true;
        }
        return false;
    }
};