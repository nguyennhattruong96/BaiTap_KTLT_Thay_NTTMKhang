#include "BaiTap_KTLT_034.h"


int Input (string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if ( n <= 0)
		{
			cout << "So Nhap Vao La So Am Hoac So 0 Hay Nhap Lai " << endl;
		}

	} while (n <= 0);

	return n;
}


void Output (int n)
{
	cout << "ket qua la: " << n << endl;
}


double Sum (int n)
{
	double s = 0;

	for (int  i = 1; i <= n; i++)
	{
		s = sqrt (i + s);
	}

	return s;
}
