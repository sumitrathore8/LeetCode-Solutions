class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans(m+n);
        int start1=0,start2=0;
        int i=0;
        while(start1<m && start2<n){
            if(nums1[start1]<nums2[start2]){
                ans[i]=nums1[start1];
                start1++;
                i++;
            }
            else{
                ans[i]=nums2[start2];
                start2++;
                i++;
            }
        }
        while(start1<m){
            ans[i]=nums1[start1];
            start1++;
            i++;
        }
        while(start2<n){
            ans[i]=nums2[start2];
            start2++;
            i++;
        }
        nums1=ans;
    }
};