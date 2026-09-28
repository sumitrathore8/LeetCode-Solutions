class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2*n);
        int j=n-1;
        for(int i=0;i<2*n;i++){
            if(i<n) ans[i]=nums[i];
            else {
                ans[i]=nums[j];
                j--;
            }
            
        }
        return ans;
    }
};