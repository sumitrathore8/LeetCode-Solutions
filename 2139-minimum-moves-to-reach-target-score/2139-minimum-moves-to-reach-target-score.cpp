class Solution {
public:
int steps(int t,int d){
    if(t==1){
        return 0;
    }
    if(d>0){
        if(t%2==0) return 1+steps(t/2,d-1);
        else return 1+steps(t-1,d);
    }
    return t-1;
}
    int minMoves(int t, int d) {
        return steps(t,d);
    }
};