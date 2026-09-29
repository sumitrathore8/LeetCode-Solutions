class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>ans(n+1,0);
        int max1=ans[0];
        for(int i=0;i<n;i++){
            ans[i+1]=ans[i]+gain[i];
            max1=max(ans[i+1],max1);
        }
        return max1;
    }
};