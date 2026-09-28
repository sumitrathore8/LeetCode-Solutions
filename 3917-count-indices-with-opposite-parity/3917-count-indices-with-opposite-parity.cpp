class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) even++;
            else odd++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                even--;
                ans.push_back(odd);
            }
            else{
                odd--;
                ans.push_back(even);
            }
        }
        return ans;
    }
};