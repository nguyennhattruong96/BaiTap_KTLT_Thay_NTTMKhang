#include "BaiTap_KTLT_009.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So Am Hoac So 0 Hay Nhap Lai";
		}

	} while (n <= 0);

	return n;
}


void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}


double Tich (int n)
{
	double s = 1;

	for (int i = 1; i <= n; i++)
	{
		s = s * i ;
	}

	return s;
}




