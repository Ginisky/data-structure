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
				cout << "error: ȱ����"<<tem.Pop()<<"ƥ��ķ���" << endl;
				return 0;
			}
			tem.Pop();
			ifile.get(ch);
			break;
		case']':
			if (tem.Top() != '[')
			{
				cout << "error: ȱ����"<<tem.Pop()<<"ƥ��ķ���" << endl;
				return 0;
			}
			tem.Pop();
			ifile.get(ch);
			break;
		case'}':
			if (tem.Top() != '{')
			{
				cout << "error: ȱ����"<<tem.Pop()<<"ƥ��ķ���" << endl;
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
		cout << tem.Pop() << "���ļ���β��ƥ��" << endl;
		return 0;
	}
	return 1;
}

int main()
{
	ifstream ifile("data.txt");
	if (Fun(ifile) == 1)
		cout << "ƥ��ɹ�" << endl;
	return 0;
}
