class Solution {
public:
    string clearDigits(string s) {
        stack<char>stk;
        int i=0;
        while(i<s.size()){
            char c=s[i];
            i++;
            if(c>='a'&&c<='z')
            stk.push(c);
            else if(c>='0'&&c<='9'){
                if(!stk.empty())
                    stk.pop();
            }
        }
        string ans;
        while(!stk.empty()){
            char x=stk.top();
            stk.pop();
            ans=ans+x;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};