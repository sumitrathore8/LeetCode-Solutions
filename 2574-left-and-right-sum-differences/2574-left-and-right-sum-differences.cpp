class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size(),sum=0;
        vector<int>left(n,0);
        vector<int>right(n,0);
        vector<int>ans(n);
        for(int i=1;i<n;i++){
            sum+=nums[i-1];
            left[i]=sum;
        }
        sum=0;
        for(int i=n-2;i>=0;i--){
            sum+=nums[i+1];
            right[i]=sum;
        }
        for(int i=0;i<n;i++){
            int dig=left[i]-right[i];
            if(dig<0) dig*=-1;
            ans[i]=dig;
        }
        return ans;

    }
};