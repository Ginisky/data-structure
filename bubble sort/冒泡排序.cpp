#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
int main()
{
	int a[100000],temp;
        clock_t start, end;
	for (int i = 0; i < 100000; i++)
		a[i] = rand() % 101 + 0;
	bool flag;
        start = clock();
	for (int i = 0; i <100000-1; i++)
	{
		flag = false;
		for (int j = 20000-1; j > i; j--)
		{
			if (a[j - 1] > a[j])
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
				flag = true;
			}
		}
		if (!flag)
			break;
	}
        end = clock();
	cout << "Totle Time : " << (double)(end-start) / CLOCKS_PER_SEC << "s" << endl;

    return 0;
}

