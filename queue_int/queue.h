#define MAX 3

class Queue
{
	public:
		Queue();
		~Queue();
		
		void enqueue(int element);
		int dequeue();
		int front_val();
		int rear_val();
		bool isEmpty();
		bool isFull();
		
	private:
		int elements[MAX];
		int front;
		int rear;
};


