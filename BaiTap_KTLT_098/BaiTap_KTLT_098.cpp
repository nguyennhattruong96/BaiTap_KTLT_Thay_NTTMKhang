#include "BaiTap_KTLT_098.h"


int Input (string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "So Nhap Vao La So Am Hoac So 0 Hay Nhap Lai" << endl;
		}

	} while (n < 0);

	return n;
}


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


void Sum(int x, int n)
{
	double s = 0;
	double gt = 1;

	for (int i = 1; i <= n; i++)
	{
		gt *= i;

		s += 1.0 * pow(x, i) / gt;

	}

	cout << "Ket qua la: " << s << endl;
}

