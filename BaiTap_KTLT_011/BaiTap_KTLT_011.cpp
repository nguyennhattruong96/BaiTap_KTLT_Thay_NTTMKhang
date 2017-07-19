#include "BaiTap_KTLT_011.h"

int Input (string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "nhap vao so lon hon 0";
		}
	} while (n < 0);

	return n;
}


void Output (int n)
{
	cout << "ket qua la:" << n << endl;
}


double Tong (int n)
{
	double s = 0;
	int gt = 1;

	for (int i = 0; i <= n; i++)
	{
		gt = gt * i;

		s += gt;
	}

	return s;
}

