#include<iostream>
#include<queue>
#include<deque>
using namespace std;
#if 0
class MyStack {
private:
    queue<int>q;
public:
    MyStack() {

    }

    void push(int x) {
        int size = q.size();
        q.push(x);
        for (int i = 0; i < size; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return (q.empty() ? true : false);
    }
};
#endif // 0
class MyStack {
private:
    deque<int>dq;
public:
    MyStack() {

    }

    void push(int x) {
        dq.push_back(x);
    }

    int pop() {
        int val = dq.back();
        dq.pop_back();
        return val;
    }

    int top() {
        return dq.back();
    }

    bool empty() {
        return (dq.empty() ? true : false);
    }
};