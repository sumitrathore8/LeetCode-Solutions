class Solution {
public:
vector<vector<int>>ans;
void helper(vector<int>arr,int i,vector<int>temp){
    int n=arr.size();
    if(i==n){
        ans.push_back(temp);
    }
    else{
        // do not include
        helper(arr,i+1,temp);
        // include
        temp.push_back(arr[i]);
        helper(arr,i+1,temp);
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        helper(nums,0,temp);
        return ans;
    }
};