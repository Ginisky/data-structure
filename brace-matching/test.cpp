#include<iostream>
#include<fstream>
#include"Stack.cpp"
using namespace std;

Stack<char, 100> tem;

int Fun(ifstream& ifile)
{
	char ch;
	ifile.get(ch);
	while (!ifile.eof())
	{
		switch (ch)
		{
		case'(':
		case'{':
		case'[':
			tem.Push(ch);
			ifile.get(ch);
			break;
		case')':
			if (tem.Top() != '(')
			{
				cout << "error: 缺少与"<<tem.Pop()<<"匹配的符号" << endl;
				return 0;
			}
			tem.Pop();
			ifile.get(ch);
			break;
		case']':
			if (tem.Top() != '[')
			{
				cout << "error: 缺少与"<<tem.Pop()<<"匹配的符号" << endl;
				return 0;
			}
			tem.Pop();
			ifile.get(ch);
			break;
		case'}':
			if (tem.Top() != '{')
			{
				cout << "error: 缺少与"<<tem.Pop()<<"匹配的符号" << endl;
				return 0;
			}
			tem.Pop();
			ifile.get(ch);
			break;
		default:
			ifile.get(ch);
		}
	}
	if (!tem.Empty())
	{
		cout << "error" << endl;
		cout << tem.Pop() << "与文件结尾不匹配" << endl;
		return 0;
	}
	return 1;
}

int main()
{
	ifstream ifile("data.txt");
	if (Fun(ifile) == 1)
		cout << "匹配成功" << endl;
	return 0;
}
