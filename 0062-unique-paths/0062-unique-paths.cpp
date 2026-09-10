class Solution {
public:
int helper(int i,int j,vector<vector<int>>&dat){
    if(i==0 && j==0) return 1;
    if(i<0 || j<0) return 0;
    if(dat[i][j]==0) dat[i][j]=helper(i,j-1,dat)+helper(i-1,j,dat);
    return dat[i][j];
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dat(m,vector<int>(n));
        return helper(m-1,n-1,dat);
    }
};