class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int m=0;
        for(int i:gain){
            sum+=i;
            if(sum>m) m=sum;
        }
        return m;
    }
};