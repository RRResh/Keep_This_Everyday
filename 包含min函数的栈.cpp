//定义栈的数据结构，请在该类型中实现一个能够得到栈的最小元素的 min 函数在该栈中，调用 min、push 及 pop 的时间复杂度都是 O(1)。
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>a,b;
    MinStack() {

    }
    
    void push(int x) {
        a.push(x);
        if(b.empty()||x<=b.top()) b.push(x);
    }
    
    void pop() {
        if(a.top()==b.top())
        {
            b.pop();
        }
        a.pop();
    }
    
    int top() {
        if(a.empty()) return NULL;
        return a.top();
    }
    
    int min() {
        if(b.empty()) return NULL;
        return b.top();
    }
};
