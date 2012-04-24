#include "MyStack.h"

MyStack::MyStack(void)
{
	idx = 0;
	m_data.clear();
}

MyStack::~MyStack(void)
{
}

int MyStack::pop(void)
{
	int d = m_data[idx];
	m_data.pop_back();
	idx -=1;
	return d;
}

void MyStack::push(int data)
{
	m_data.push_back(data);
	idx +=1;
}
