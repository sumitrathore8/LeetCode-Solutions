class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0,end=(matrix.size()*matrix[0].size())-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int col=mid%matrix[0].size();
            int row=mid/matrix[0].size();
            if(matrix[row][col]==target){
                return true;
                break;
            }
            else if(matrix[row][col]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};