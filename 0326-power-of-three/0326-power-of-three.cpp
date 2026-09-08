class Solution {
public:
bool power(int n){
    if(n==1){
        return true;
    }
    else if(n<=0){
        return false;
    }
    else if(n%3==0){
        return power(n/3);
    }
    else {
        return false;
    }
    }
    bool isPowerOfThree(int n) {
        return power(n);
    }
};