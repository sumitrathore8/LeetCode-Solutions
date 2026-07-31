#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Stack {
public:
    vector<int> item;
    int top;

    Stack(int m) {
        item.resize(m);
        top = -1;
    }

    void push(int x) {
        if (top == item.size() - 1) {
            cout << "Stack Overflow";
            return;
        }
        item[++top] = x;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow";
            return -1;
        }
        return item[top--];
    }

    int Stacktop() {
        if (top == -1) {
            return -1;
        }
        return item[top];
    }

    bool Isempty() {
        return top == -1;
    }
};
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    Stack s(tokens.size());
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                s.push(stoi(tokens[i]));
            }
            else {
                int b = s.pop();
                int a = s.pop();
                if (tokens[i] == "+")
                    s.push(a + b);
                else if (tokens[i] == "-")
                    s.push(a - b);
                else if (tokens[i] == "*")
                    s.push(a * b);
               else
                    s.push(a / b);
            }
        }

        return s.Stacktop();
    }
};