class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int>ans(101,0);
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        int sum=0;
        for(int i=1;i<101;i++){
            if(ans[i]%k==0){
                sum+=i*ans[i];
            }
        }
        return sum;
    }
};