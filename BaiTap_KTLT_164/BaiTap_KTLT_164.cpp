#include "BaiTap_KTLT_164.h"


int Input (string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So 0 Hoac So Am Hay Nhap Lai" << endl;
		}

	} while (n <= 0);

	return n;
}



void Output (int n)
{
	cout << "Ket qua la: " << n << endl;
}


void Sum (int x)
{
	double s = 0;

	for (int i = 1; i <= x; i++)
	{
		if (i %2 != 0)
		{
			s += i;
		}
	}

	cout << "Ket Qua La : " << s << endl;
}
