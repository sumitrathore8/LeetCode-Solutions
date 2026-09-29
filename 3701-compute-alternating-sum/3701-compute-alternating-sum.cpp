class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int odd=0,even=0;
        for(int i=0;i<n;i+=2){
            even+=nums[i];
        }
        for(int i=1;i<n;i+=2){
            odd+=nums[i];
        }
        return even-odd;
    }
};