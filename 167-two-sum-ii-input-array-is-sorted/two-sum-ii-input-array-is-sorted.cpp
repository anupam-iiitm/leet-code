class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int d;
        for(int i=nums.size()-1;i>=0;i--){
            
            d=target-nums[i];
            if(m.count(d)){
                return {i+1,m[d]+1};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};