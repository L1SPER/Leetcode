#include<iostream>
#include<stack>
using namespace std;
class MyQueue {
private:
    stack<int>tmp;
    stack<int>s;
public:
    MyQueue() {

    }

    void push(int x) {
        while (!s.empty())
        {
            tmp.push(s.top());
            s.pop();
        }
        tmp.push(x);
        while (!tmp.empty())
        {
            s.push(tmp.top());
            tmp.pop();
        }
    }

    int pop() {
        int val = s.top();
        s.pop();
        return val;
    }

    int peek() {
        return s.top();
    }

    bool empty() {
        return (s.empty() ? true : false);
    }
};