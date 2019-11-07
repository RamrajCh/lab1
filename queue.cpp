#include "queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
	front=-1;
	rear=-1;	
}

Queue::~Queue(){}


bool Queue::isEmpty()
{
	return (rear==front);
}

bool Queue::isFull()
{
	return rear==MAX-1;
}

void Queue::enqueue(int element)
{
	if (!isFull())
	{
		rear+=1;
		elements[rear]=element;
	}
	else
	{
		cout<<"Cannot enqueue "<<element<<". Queue overflow"<<endl;
	}
}

int Queue::dequeue()
{
	if(!isEmpty())
	{
		front+=1;
		return elements[front];	
	}
	else
	{
		cout<<"Cannot dequeue. Queue underflow"<<endl;
		return -1;
	}
}

int Queue::front_val()
{
		if(!isEmpty())
	{
		int val=front+1;
		return elements[val];	
	}
	else
	{
		cout<<"No front value"<<endl;
		return -1;
	}
}

int Queue::rear_val()
{
		if(!isEmpty())
	{
		return elements[rear];	
	}
	else
	{
		cout<<"No rear value"<<endl;
		return -1;
	}
}

