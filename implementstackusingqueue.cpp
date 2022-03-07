#include <iostream>
#include <bits/stdc++.h>

class MyStack {
public:
    std::queue<int> q1;
    std::queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {
        if(this->q1.empty()){
            this->q1.push(x);
        }else{
            while(!this->q1.empty()){
                this->q2.push(this->q1.front());
                this->q1.pop();
            }
            this->q1.push(x);
            while(!this->q2.empty()){
                this->q1.push(this->q2.front());
                this->q2.pop();
            }
        }
        
    }
    
    int pop() {
        while(!this->q1.empty()){
                this->q2.push(this->q1.front());
                this->q1.pop();
        }
        int popValue = this->q2.front();
        this->q2.pop();
        while(!this->q2.empty()){
                this->q1.push(this->q2.front());
                this->q2.pop();
            }
        return popValue;
    }
    
    int top() {
        return this->q1.back();
    }
    
    bool empty() {
        return this->q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */