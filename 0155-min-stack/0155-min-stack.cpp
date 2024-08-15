class MinStack {
public:
     
    stack<int> check;
    stack<int> min;
    int mini;
    MinStack() {
        mini=INT_MAX;
    }
    
    void push(int val) {
        check.push(val);
        if(val <= mini){
            min.push(val);
            mini=val;
        }
    }
    
    void pop() {
        if(!check.empty() && check.top()==mini){
            if(!min.empty()) min.pop();
            if(!min.empty()) mini=min.top();
            if(min.empty()) mini=INT_MAX;
        }
        if(!check.empty()) check.pop();
    }
    
    int top() {
        if(check.empty()) return 0;
        return check.top();
    }
    
    int getMin() {
        return mini;
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