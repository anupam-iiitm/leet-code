class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int min1=nums[0];
        int max1=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
             if(nums[i]<0){
                swap(min1,max1);
            }
            min1=min(nums[i],min1*nums[i]);
            max1=max(nums[i],max1*nums[i]);
           
            ans=max(ans,max1);
        }
    return ans;  
    }
};