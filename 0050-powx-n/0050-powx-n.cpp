class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            N=N*-1;
            return 1/pow(x,N);
        }
        else return pow(x,N);
    }
};