class Solution {
public:
    int bitwiseComplement(int n) {
        int m=1;
        if(n==0) return 1;
        int i=2;
        while(m<=n){
            if(m==n) return m-1;
            m=m*i; 
        }
        m=m-1;
        return (m-n);
    }
};