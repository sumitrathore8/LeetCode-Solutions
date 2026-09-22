class Solution {
public:
void Merge(vector<int>& nums,int low,int mid,int high){
    vector<int>ans(high-low+1);
    int index=0;
    int i=low,j=mid+1;
    while(i<=mid && j<=high){
        if(nums[i]<nums[j]){
            ans[index]=nums[i];
            index++;
            i++;
        }
        else{
            ans[index]=nums[j];
            index++;
            j++;
        }
    }
    while(i<=mid){
        ans[index]=nums[i];
        index++;
        i++;
    }
    while(j<=high){
        ans[index]=nums[j];
        index++;
        j++;
    }
    for(int k=0;k<ans.size();k++) {
        nums[k+low]=ans[k];
    }
}
void mergeSort(vector<int> & nums,int start,int end){
    int mid=start+(end-start)/2;
    if(start>=end) return ;
    mergeSort(nums,start,mid);
    mergeSort(nums,mid+1,end);
    Merge(nums,start,mid,end);
}
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};