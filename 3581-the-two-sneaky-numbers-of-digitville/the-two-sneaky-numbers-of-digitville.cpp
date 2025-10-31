class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int i:nums){
            m[i]++;
            if(m[i]>1) v.push_back(i);
        }
        return v;
    }
};