#include "BaiTap_KTLT_091.h"


int Input (string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "So Nhap Vao La So Am Hay Nhap  Lai" << endl;
		}

	} while (n < 0);

	return n;
}


void Output (int n)
{
	cout << "Ket qua la: " << n << endl;
}


double Sum (int x )
{
	double s = 0;
	double gt = 1;
	

	for (int i = 1; i <= x; i++)
	{
		gt = gt * i;

		s += gt;
	}
	
	return s;
}

