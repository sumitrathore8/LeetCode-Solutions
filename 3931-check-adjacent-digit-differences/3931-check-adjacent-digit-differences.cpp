class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n=s.size();
        for(int i=0;i<n-1;i++){
            int x=(s[i]-'0')-(s[i+1]-'0');
            if(x<0) x=x*(-1);
            if(x>2) return false;
        }
        return true;
    }
};