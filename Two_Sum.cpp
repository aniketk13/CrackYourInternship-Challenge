class Solution {
public:
  
  //First Approach
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i= 0;i < nums.size();i++)
        {   
            if(mp.find(target - nums[i]) != mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[target - nums[i]]);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
  
  //Second Approach
  vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                     result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};
