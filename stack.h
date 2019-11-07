#define MAX_STACK_SIZE 3

class Stack
{
	public:
		Stack();
		~Stack();
		
		void push(int element);
		int pop();
		int top_val();
		bool isEmpty();
		bool isFull();
		
	private:
		int elements[MAX_STACK_SIZE];
		int top;
};


