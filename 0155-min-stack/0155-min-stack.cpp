class MinStack {
private:

    stack<int> main,min;

public:
    MinStack() {
    }
    
    void push(int val) {
        main.push(val);
        if(min.empty() || val<=min.top()){
            min.push(val);
        }
    }
    
    void pop() {
        if(main.empty()){
            return;
        }
        if(main.top() == min.top()){
            min.pop();
        }
        main.pop();
    }
    
    int top() {
        if(main.empty()){
            return -1;
        }
        return main.top();
    }
    
    int getMin() {
        if(min.empty()){
            return -1;
        }
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */