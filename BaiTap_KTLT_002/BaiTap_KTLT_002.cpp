#include "BaiTap_KTLT_002.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So nhap vao la so 0 hoac so am hay nhap lai " << endl ;
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
		s += i * i;
	}

	return s;
}