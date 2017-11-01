#include"Fun.h"
#include<iostream>

int Fib_1(int n)
{
	if (n <= 2)
		return 1;
	return Fib_1(n - 1) + Fib_1(n - 2);
}

int Fib_2(int a, int b, int n)
{
	if (n > 2)
		return Fib_2(a + b, a, n - 1);
	return a;
}

