class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long,int> m;
        m[0]=1;
        int c=0;

        int s =0;

        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if(m.count(s-k))c+=m[s-k];
            cout<<s;
            m[s]++;
        }
        
        return c;
    }
};