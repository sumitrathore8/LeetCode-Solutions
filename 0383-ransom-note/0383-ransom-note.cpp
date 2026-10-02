class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>b(26,0);
        for(int i=0;i<magazine.size();i++){
            b[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(--b[ransomNote[i]-'a']<0) return false;
        }
        return true;
        
    }
};