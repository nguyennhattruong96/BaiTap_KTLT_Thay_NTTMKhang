#include "BaiTap_KTLT_007.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La Hoac La So O Hay Nhap Lai";
		}

	} while (n <= 0);

	return n;
}


void Output(int n)
{
	cout << "ket qua la: " << n << endl;
}


double Sum(int n)
{
	double s = 0;

	for (int i = 1; i <= n; i++)
	{
		s += (i * 1.0 / (i + 1));
	}

	return s;
}
