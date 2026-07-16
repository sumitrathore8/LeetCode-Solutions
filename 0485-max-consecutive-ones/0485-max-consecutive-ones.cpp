class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0,temp=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
            sum++;
            if(temp<sum){
               temp=sum;
            }
           }
           else{
            sum=0;
           }
        }
        return temp;
    }
};