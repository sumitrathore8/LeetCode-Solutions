class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.size();
        vector<char>a(n);
        for(int i=0;i<s.size();i++){
            a[indices[i]]=s[i];
        }
        string ans;
        for(int i=0;i<a.size();i++){
            ans+=a[i];
        }
        return ans;
    }
};