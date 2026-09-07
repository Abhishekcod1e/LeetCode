class MinStack {
private:
        stack<int> stc;
        stack<int> minstc;
public:
    MinStack() {
    }
    
    void push(int value) {
        stc.push(value);
        if(minstc.empty() || value<= minstc.top()){
            minstc.push(value);
        }

    }
    
    void pop() {
        if(stc.top()==minstc.top()){
            minstc.pop();
        }
        stc.pop();
    }
    
    int top() {
        return stc.top();
        
    }
    
    int getMin() {
        return minstc.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */