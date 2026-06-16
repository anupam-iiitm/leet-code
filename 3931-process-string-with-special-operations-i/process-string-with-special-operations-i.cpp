class Solution {
public:
    string rev(string s){
        string s1="";
        for(int i=s.size()-1;i>=0;i--){
            s1=s1+s[i];
        }
        return s1;
    }
    string processStr(string s) {
        string res="";
        for(char c:s){
            if(c=='*') res=res.substr(0,res.size()-1);
            else if(c=='#') res=res+res;
            else if(c=='%') res=rev(res);
            else res=res+c;
        }
        return res;
    }
};