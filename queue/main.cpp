#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
	 cout<<"-------------------QUEUE IMPLEMENTATION------------------"<<endl;
    Queue q;
    q.enqueue('a');
    q.enqueue('r');
    q.enqueue('a');

    cout<<"Dequeued value= "<<q.dequeue()<<endl;
    q.enqueue('m');
    q.enqueue('a');

    cout<<"Front value= "<<q.front_val()<<endl;
    cout<<"Rear value= "<<q.rear_val()<<endl;

}
