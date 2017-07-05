#include "BaiTap_KTLT_008.h"


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

double Sum(int n)
{
	double s = 0;
	for (int i = 0; i <= n; i++)
	{
		s += (2 * i + 1)*1.0 / (2 * i + 2);
	}
	return s;
}



