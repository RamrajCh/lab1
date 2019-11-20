#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
	Queue q;
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(6);

	cout<<q.dequeue();
	q.enqueue(7);
	q.enqueue(4);
	
	cout<<q.rear_val();
	cout<<q.front_val();
		
}
