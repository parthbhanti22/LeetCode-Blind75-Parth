class MinStack {

private:
    stack<int> st;
public:
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> temp(st);
        int minE = INT_MAX;
        while(!temp.empty()){
            int t = temp.top();
            minE = min(minE,t);
            temp.pop();
        }
        return minE;
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