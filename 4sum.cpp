class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;
                if(nums.size()<4)
                    return ans;
        sort(nums.begin(),nums.end());
        //-2,-1,0,0,1,2
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int left=j+1,right=nums.size()-1;
                int target2=target-nums[i]-nums[j];
                while(left<right){
                    if(nums[left]+nums[right]<target2)
                        left++;
                    else if(nums[left]+nums[right]>target2)
                        right--;
                    else{
                        ans.push_back(vector<int>{nums[i],nums[j],nums[left],nums[right]});
                        left++; right--;
                        while(left<right && nums[left]==nums[left-1])
                            left++;
                        while(right>left && nums[right]==nums[right+1])
                            right--;
                    }
                }
                while(j+1<nums.size() && nums[j]==nums[j+1])
                    j++;
            }
            while(i+1<nums.size() && nums[i]==nums[i+1])
                i++;
        }
        return ans;
    }
};
