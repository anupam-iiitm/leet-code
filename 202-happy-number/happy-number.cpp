class Solution {
public:
    bool isHappy(int n) {
        if(n<0 || n==0) return false;
        bool b=false;
        unordered_set<int> s;
        // {19,82,68}
        while(n!=1 && s.find(n)==s.end()){
           s.insert(n);
            n=sumsq(n);
        }
        return n==1;
    }
    int sumsq(int n){
        int sum=0;
        while(n!=0){
        sum=sum+pow(n%10,2);
        n=n/10;
        }
        return sum;
    }
};