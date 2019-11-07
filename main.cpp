#include "stack.h"
#include <iostream>
using namespace std;

int main()
{
	Stack s;
	s.push(3);
	s.push(4);
	s.push(6);

	cout<<s.pop();
	s.push(7);
	s.push(4);
	
	cout<<s.top();
		
}
