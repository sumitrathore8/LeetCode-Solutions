class Solution {
public:
    vector<int> findPeaks(vector<int>& x) {
        vector<int>ans;
        int n=x.size();
        for(int i=1;i<n-1;i++){
            if(x[i]>x[i-1] && x[i]>x[i+1]){
                ans.push_back(i); 
            }
        }
        return ans;
    }
};