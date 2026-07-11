class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0,end=n-1;
        while(start<=end){
            int mid=end+(start-end)/2;
            //peak element
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            //right side move
            else if(arr[mid]>arr[mid-1]){
                start=mid+1;
            }
            //eft side move
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};