class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        int n=words.size();
        for(int i=0;i<n;i++){
            string temp=words[i];
            int size=temp.size();
            int j=0;
            while(j<size){
                if(temp[j]==x){
                    ans.push_back(i);
                    break;
                }   
                j++;
            }
        }
        return ans;
    }
};