class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        k=nums.size()-k+1;
        int f=0;
        for(auto it:mp){
            f+=it.second;
            if(f>=k)
                return it.first;
        }
        return -1;
    }
};