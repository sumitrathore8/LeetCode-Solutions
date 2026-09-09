class Solution {
public:
int steps(int n1,int n2){
    if(n1==0 || n2==0) 
    return 0;
    if(n1>=n2) 
    return 1+steps(n1-n2,n2);
    else 
    return 1+steps(n1,n2-n1);
}
    int countOperations(int n1, int n2) {
        return steps(n1,n2);
    }
};