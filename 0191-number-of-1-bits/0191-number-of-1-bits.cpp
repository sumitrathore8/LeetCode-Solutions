class Solution {
public:
        int count (int n){
            if(n==0){
                return 0;
            }
            else if(n%2==0){
                return count(n/2);
            }
            else{
                return 1+count(n/2);
            }
        }
    int hammingWeight(int n) {
        return count(n);
    }
};