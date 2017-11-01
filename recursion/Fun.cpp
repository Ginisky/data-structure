#include<iostream>
#include"Fun.h"
using namespace std;

int a[10];

int Fun(int num, int score)
{
	if (score>num * 10 || score<0)
		return 0;
	if (num == 1 && score <= 10 && score >= 0)
	{
		a[0] = score;
		for (int i = 0; i < 10; i++)
			cout << a[i] << " ";
		cout << endl;
		return 1;
	}
	int sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		a[num-1] = i;
		sum=sum+Fun(num - 1, score-i);
	}
	return sum;
}
