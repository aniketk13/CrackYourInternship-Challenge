class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,k=1;
        for(int j=1;j<nums.size();j++){
             if(nums[i]!=nums[j]){
                 nums[k]=nums[j];
                 i++;
                 k++;
             }
        }
        return k;
    
    }
};
