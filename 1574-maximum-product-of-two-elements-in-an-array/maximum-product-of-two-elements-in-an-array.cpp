class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m1=nums[0],m2=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=m1){
                m2=m1;
                m1=nums[i];
            }
            else if(nums[i]>m2)m2=nums[i];
        }
        return (m2-1)*(m1-1);
    }
};