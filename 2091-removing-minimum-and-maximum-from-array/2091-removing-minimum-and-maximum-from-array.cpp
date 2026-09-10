class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
    int max1=INT_MIN;
    int min1=INT_MAX;
    int n=arr.size(),index1,index2;
    for(int i=0;i<n;i++){
        if(max1<arr[i]){
            max1=arr[i];
            index1=i;
        }
        if(min1>arr[i]){
            min1=arr[i];
            index2=i;
        }
    }
    int min2=0;
    int min3=0;
    if(index1>index2){
        min2=n-(index1-index2-1);
        min3=min(index1+1,n-index2);
    }
    else{
        min2=n-(index2-index1-1);
        min3=min(index2+1,n-index1);
    }
    return min(min3,min2);
    }
};