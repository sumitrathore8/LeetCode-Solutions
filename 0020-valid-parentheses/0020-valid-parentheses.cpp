#include <iostream>
using namespace std;
class Stack{
    public:
    vector<char>item;
    int top;

    Stack(int m){
        item.resize(m);
        top=-1;
    }

    void push(char x){
        if(top==item.size()-1){
            cout<<"satck overflow";
            return ;
        }
        top++;
        item[top]=x;
    }

    char pop(){
        if(top==-1){
            cout<<"stack overflow";
            return '\0';
        }
        char x=item[top];
        top--;
        return x;
    }

    char Stacktop(){
        char x=item[top];
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
    bool isValid(string s) {
        Stack st(100000);
        bool flag=true;
        int i=0;
        while(i<s.size()){
            char x=s[i];
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(x);
            }    
            else{
                if(st.Isempty()){
                    flag=false;
                    break;
                }    
                char y=st.Stacktop();
                if((y=='(' && x==')') || (y=='{' && x=='}') || (y=='[' && x==']')){
                    st.pop();
                }
                else{
                    break;
                }
            }
            i++;
        }
    if(st.Isempty()){
        if(flag==0){
            return false;
        }
        else{
            return true; 
        }
    }
    return false;   
    }
};