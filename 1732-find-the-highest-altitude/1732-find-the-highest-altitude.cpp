class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int temp=0;
        int max1=0;
        for(int i=0;i<n;i++){
            temp+=gain[i];
            max1=max(max1,temp);
        }
        return max1;
    }
};