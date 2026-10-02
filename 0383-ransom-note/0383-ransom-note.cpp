class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(int i=0;i<ransomNote.size();i++){
            a[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.size();i++){
            b[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(b[i]<a[i]) return false;
        }
        return true;
        


    }
};