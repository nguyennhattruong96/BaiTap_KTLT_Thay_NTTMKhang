#include "BaiTap_KTLT_034.h"


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

double sum(int n)
{
	double s = 0;
	if (n <=0)
	{
		return false;
	}
	else
	{
		for (int  i = 1; i <= n; i++)
		{
			s = sqrt(i + s);
		}
		return s;
	}
}
