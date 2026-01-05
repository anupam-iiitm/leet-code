class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        bool b=false;
        for(int i:nums){
            if(s.find(i)!=s.end()){
                b=true;
                break;
            }
            s.insert(i);
        }
        return b;
    }
};