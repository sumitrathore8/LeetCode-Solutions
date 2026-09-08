class Solution {
public:
bool power(int n){
    if(n==1){
        return true;
    }
    else if(n==0){
        return false;
    }
    else if(n%2==0){
        return power(n/2);
    }
    else {
        return false;
    }
    }
    bool isPowerOfTwo(int n) {
        return power(n);
    
    }
};