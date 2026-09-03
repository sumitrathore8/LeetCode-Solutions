class Solution {
public:
    int dTOb(int n){
    if(n<=0){
        return 0;
    }
    else{
    int rem=n%2;
    return dTOb(n/2)+rem;
    }
}
    int hammingWeight(int n) {
        return dTOb(n);
    }
};