#include "BaiTap_KTLT_004.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So nhap vao la 0 hay so am hay nhap lai" << endl;
		}

	} while (n <= 0);

	return n;
}


void Output(int n)
{
	cout << "ket qua la: " <<  n  << endl;
}


double Sum(int n)
{
	double s = 0;

	for (int i = 1;
		
		
		
		i <= n; i++)
	{
		s += 1.0 / (2 * i);
	}

	return s;
}