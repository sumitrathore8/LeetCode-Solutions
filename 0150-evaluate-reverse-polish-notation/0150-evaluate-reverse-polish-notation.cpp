#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Stack{
    public:
    vector<int>item;
    int top;

    Stack(int m){
        item.resize(m);
        top=-1;
    }

    void push(int x){
        if(top==item.size()-1){
            cout<<"satck overflow";
            return ;
        }
        top++;
        item[top]=x;
    }

    int pop(){
        if(top==-1){
            cout<<"stack overflow";
            return '\0';
        }
        int x=item[top];
        top--;
        return x;
    }

    int Stacktop(){
        int x=item[top];
        return x;
    }

    bool Isempty(){
        if(top==-1){
        return true;
        }
        else{
        return false;
        }
    }

};
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        Stack s(1000000);
        for(int i=0;i<tokens.size();i++){
            
            if(tokens[i]!="+" && tokens[i]!="/" && tokens[i]!="*" && tokens[i]!="-" ){
                int n=stoi(tokens[i]);
                s.push(n);
            }
            else{
                int b=s.Stacktop();
                s.pop();
                int a=s.Stacktop();
                s.pop();
                if(tokens[i]=="+"){
                    s.push(a+b);
                }
                else if(tokens[i]=="/"){
                    s.push(a/b);
                }
                else if(tokens[i]=="-"){
                    s.push(a-b);
                }
                else{
                    s.push(a*b);
                }    
            }
        }
        int ans=s.Stacktop();
        return ans;
    }
};