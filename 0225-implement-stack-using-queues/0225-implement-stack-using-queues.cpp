class MyStack {
public: std::queue<int> queue1;
    std::queue<int> queue2;

    MyStack() {
        
    }
    
    void push(int x) {
                queue1.push(x);

    }
    
    int pop() {
          while (queue1.size() > 1) {
            queue2.push(queue1.front());
            queue1.pop();
        }
        int topElement = queue1.front();
        queue1.pop();
        std::swap(queue1, queue2);
        return topElement;
    }
    
    int top() {
        while (queue1.size() > 1) {
            queue2.push(queue1.front());
            queue1.pop();
        }
        int topElement = queue1.front();
        queue2.push(queue1.front());
        queue1.pop();
        std::swap(queue1, queue2);
        return topElement;
    }
    
    bool empty() {
                return queue1.empty() && queue2.empty();

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