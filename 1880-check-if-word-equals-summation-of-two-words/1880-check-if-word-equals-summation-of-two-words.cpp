class Solution {
public:
    bool isSumEqual(string s1, string s2, string t) {
        int n1=s1.size();
        int n2=s2.size();
        int n3=t.size();
        string sum1="",sum2="",sum3="";
        for(int i=0;i<n1;i++){
            char x=s1[i];
            sum1+=x-'a'+'0';
        }
        for(int i=0;i<n2;i++){
            char x=s2[i];
            sum2+=x-'a'+'0';
        }
        for(int i=0;i<n3;i++){
            char x=t[i];
            sum3+=x-'a'+'0';
        }
        n1=stoi(sum1);
        n2=stoi(sum2);
        n3=stoi(sum3);
        if((n1+n2)==n3) return 1;
        return 0;
    }
};