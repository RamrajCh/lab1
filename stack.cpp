#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
	top=-1;	
}

Stack::~Stack(){}


bool Stack::isEmpty()
{
	return (top<0);
}

bool Stack::isFull()
{
	return top>=MAX_STACK_SIZE-1;
}

void Stack::push(int element)
{
	if (!isFull())
	{
		top++;
		elements[top]=element;
	}
	else
	{
		cout<<"Cannot push "<<element<<". Stack overflow"<<endl;
	}
}

int Stack::pop()
{
	if(!isEmpty())
	{
		int val=elements[top];
		top--;
		return val;
	}
	else
	{
		cout<<"Cannot pop. Stack underflow"<<endl;
		return -1;
	}
}

int Stack::top_val()
{
		if(!isEmpty())
	{
		int val=elements[top];
		return val;
	}
	else
	{
		cout<<"Cannot pop.Stack underflow"<<endl;
		return -1;
	}
}
