#pragma once
#include <vector>

using namespace std;


class MyStack
{
public:
	MyStack(void);
	~MyStack(void);
	int pop(void);

private:
	vector<int> m_data;
	int idx;
public:
	void push(int data);
};
