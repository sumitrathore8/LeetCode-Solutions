class Solution {
public:
    string reverseVowels(string s) {
        int start=0,end=s.size()-1;
        while(start<end){
            char x=s[start];
            char y=s[end];
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){

                if(y=='a' || y=='e' || y=='i' || y=='o' || y=='u' || y=='A' || y=='E' || y=='I' || y=='O' || y=='U'){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
                else{
                    end--;
                }
            }
            else{
                start++;
            }
        }
        return s;
    }
};