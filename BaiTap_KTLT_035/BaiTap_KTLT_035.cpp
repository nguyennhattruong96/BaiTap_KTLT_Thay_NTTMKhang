#include "BaiTap_KTLT_035.h"


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
	double s = sqrt(n);
	if (n<=0)
	{
		return false;
	}
	else
	{
		for (int i = n-1; i >= 1; i--)
		{
			s = sqrt(i + s);
		}
		return s;
	}
	
}
