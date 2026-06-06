class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;

        int ls=0,rs=0;
        int l=nums.size();

        for(int i=0;i<l;i++)  rs+=nums[i];
        for(int i=0;i<l;i++){
           rs-=nums[i];
           ans.push_back(abs(ls-rs));
           ls+=nums[i];
        }
        return ans;
    }
};