class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26,0);
        if(s.size()!=t.size()) return false;
        for(char c:s){
            a[c-'a']++;
        }
        for(char c:t){
            a[c-'a']--;
            if(a[c-'a']<0) return false;
        }

        return true;

    }
};