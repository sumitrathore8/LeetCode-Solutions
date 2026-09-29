class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            vector<int>temp;
            int x=nums[i];
            while(x>0){
                temp.push_back(x%10);
                x/=10;
            }
            int si=temp.size();
            for(int j=si-1;j>=0;j--){
                ans.push_back(temp[j]);
            }
        }
        return ans;
    }
};