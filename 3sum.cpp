class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size() < 3) 
            return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int a=i;
            int b=i+1;
            int c=nums.size()-1;
            while(b<c){
                int sum=nums[a]+nums[b]+nums[c];
                if(sum>0)
                    c--;
                else if(sum<0)
                    b++;
                else
                {
                    ans.push_back(vector<int>{nums[a],nums[b],nums[c]});
                    b++;c--;
                    while(nums[b]==nums[b-1] && b<c)
                        b++;
                    while(nums[c]==nums[c+1] && b<c)
                        c--;
                }
            }
        }
        return ans;
    }
};
