#include<cmath>
#include<iostream>
#include"Fun.h"
using namespace std;
string* Gray(int n)
{
	int length = pow(2, n);
	string* GrayCode;
	GrayCode= new string[length];
	if (n == 1)
	{
		GrayCode[0] = "0";
		GrayCode[1] = "1";
		return GrayCode;
	}
	string *temp = Gray(n - 1);
	for (int i = 0; i < length/2; i++)
	{
		GrayCode[i] = "0" + temp[i];
		GrayCode[length - i - 1] = "1" + temp[i];
	}
	return GrayCode;
}
