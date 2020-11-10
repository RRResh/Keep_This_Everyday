//题目:用两个栈实现一个队列
//用两个栈实现一个队列。
//队列的声明如下，请实现它的两个函数 appendTail 和 deleteHead 
//分别完成在队列尾部插入整数和在队列头部删除整数的功能。
//(若队列中没有元素，deleteHead 操作返回 -1 )
class CQueue {
public:
	CQueue() {//清空
		while (!stack1.empty())
		{
			stack1.pop();
		}
		while (!stack2.empty())
		{
			stack2.pop();
		}
	}
	void appendTail(int value) {
		stack1.push(value);
	}
	int deleteHead() {
		if (stack2.empty())//把1全部挪到2里面 
		{
			while (!stack1.empty())
			{
				stack2.push(stack1.top());
				stack1.pop();
			}
		}
		if (stack2.empty()) return -1;
		else//如果2飞空 就删除2顶部元素
		{
			int tmp = stack2.top();
			stack2.pop();
			return tmp;
		}//返回被删除的元素 
	}
private:
	stack<int> stack1, stack2;
};