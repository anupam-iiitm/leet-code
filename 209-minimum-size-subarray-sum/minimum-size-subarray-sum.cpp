class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int sum=0;
        int best=10e5;
        bool b=false;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            if(sum<target)continue;
            else{
                b=true;
                while(sum>=target){
                    best=min(best,r-l+1);
                    sum-=nums[l++];
                    }
            } 
           
        }
        return b?best:0;
    }
};