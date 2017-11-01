#include"Stack.h"
using namespace std;
template<class T, int MaxSize>
Stack<T, MaxSize>::Stack()
{
	top = -1;
}

template<class T, int MaxSize>
void Stack<T, MaxSize>::Push(T x)
{
	if (Full())
	{
		cerr << "ÉÏÒç"; exit(1);
	}
	data[++top] = x;
}

template<class T, int MaxSize>
T Stack<T, MaxSize>::Pop()
{
	if (Empty())
	{
		cerr << "ÏÂÒç"; exit(1);
	}
	T x = data[top--];
	return x;
}

template<class T, int MaxSize>
T Stack<T, MaxSize>::Top()
{
	if (Empty())
	{
		cerr << "ÏÂÒç"; exit(1);
	}
	return data[top];
}

template<class T, int MaxSize>
bool Stack<T, MaxSize>::Empty()
{
	return top == -1;
}

template<class T, int MaxSize>
bool Stack<T, MaxSize>::Full()
{
	return top == MaxSize - 1;
}

