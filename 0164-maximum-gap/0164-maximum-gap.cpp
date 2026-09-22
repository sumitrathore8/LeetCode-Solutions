class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxDiff=0;
        int diff=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            diff=nums[i]-nums[i-1];
            maxDiff=max(maxDiff,diff);
        }
        return maxDiff;
    }
};