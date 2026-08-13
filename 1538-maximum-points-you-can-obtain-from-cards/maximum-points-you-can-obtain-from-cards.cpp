class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int curr_sum=0;
        for(int i=0;i<k;i++){
            curr_sum+=nums[i];
        }

        int max_sum=0;
        max_sum=max(max_sum,curr_sum);

        for(int i=0;i<k;i++){
            curr_sum=curr_sum+nums[nums.size()-i-1]-nums[k-1-i];
            max_sum=max(max_sum,curr_sum);
        }
        return max_sum;
    }
};