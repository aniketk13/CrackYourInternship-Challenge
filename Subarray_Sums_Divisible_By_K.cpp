class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,prefix_sum=0,rem=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefix_sum+=nums[i];
            rem=prefix_sum%k;
            if(rem<0)
                rem+=k;
            ans+=mp[rem];
            mp[rem]++;
        }
        return ans;
    }
};
