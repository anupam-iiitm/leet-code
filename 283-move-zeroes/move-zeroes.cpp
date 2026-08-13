class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;
        int temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp=nums[i];
                nums[i]=nums[l];
                nums[l]=temp;
                l++;
            }
        }
    }
};