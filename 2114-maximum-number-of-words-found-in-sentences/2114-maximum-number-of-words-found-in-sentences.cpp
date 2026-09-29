class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int max1=INT_MIN;
        for(int i=0;i<n;i++){
            string s=sentences[i];
            int word=s.size();
            int count=0;
            for(int j=0;j<word;j++){
                char x=s[j];
                if(x==' ') {
                    count++;
                }
            }
            max1=max(count+1,max1);
        }
        return max1;
    }
};