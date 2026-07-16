class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int number=nums[i],digit=0;
            while(number > 0){
                number=number/10;
                digit++;
            }
            if(digit%2==0){
                ans++;
            }
        }
        return ans;
    }
};