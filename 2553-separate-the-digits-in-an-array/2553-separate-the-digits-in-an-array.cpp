class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int x=nums[i];
            int divisor=1;
            while(x/divisor>=10){
                divisor*=10;
            }
            while(divisor>0){
                ans.push_back(x/divisor);
                x%=divisor;
                divisor/=10;
            }
        }
        return ans;
    }
};