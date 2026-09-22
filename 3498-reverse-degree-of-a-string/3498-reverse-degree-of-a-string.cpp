class Solution {
public:
    int reverseDegree(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            //int x='z'-s[i]+1;
            //int pro=x*(i+1);
            count+=('z'-s[i]+1)*(i+1);
        }
        return count;
    }
};