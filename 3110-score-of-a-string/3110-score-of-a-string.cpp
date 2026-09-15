class Solution {
public:
    int scoreOfString(string s) {
        int first=0,second=1,sum=0;
        while(second<s.size()){
            int x=s[first]-s[second];
            if(x<0){
                x=x*-1;
            }
            sum+=x;
            first++;
            second++;
        }
        return sum;
    }
};