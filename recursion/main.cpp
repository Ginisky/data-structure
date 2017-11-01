#include<iostream>
#include"Fun.h"
using namespace std;

int main()
{
	//cout << Fun(10, 90) << endl;


	/*int n;
	cout << "请输入格雷码位数" << endl;
	cin >> n;
	for (int i = 0; i < (int)pow(2, n); i++)
		cout << Gray(n)[i] << " ";
	cout << endl;*/

	int n;
	cout << "请输入斐波那契数列的位数" << endl;
	cin >> n;
	cout << Fib_1(n) << endl;
	//cout << Fib_2(1, 1, n) << endl;
	return 0;
}
