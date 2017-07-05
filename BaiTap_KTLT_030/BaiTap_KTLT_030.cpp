#include "BaiTap_KTLT_030.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;
		if (n<0)
		{
			cout << "nhap vao so lon hon 0";
		}
	} while (n<0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void SoHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n%i == 0)
		{
			s += i;
		}
	}
	if (s == n)
	{
		cout << n <<"la so hoan thien" << endl;
	}
	else
	{
		cout << n << "khong la so hoan thien" << endl;
	}
	
}
