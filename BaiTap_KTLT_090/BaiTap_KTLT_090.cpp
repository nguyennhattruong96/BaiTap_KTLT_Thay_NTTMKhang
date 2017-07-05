#include "BaiTap_KTLT_090.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "so ban nhap la so am hoac 0 hay nhap lai";
		}
	} while (n <= 0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void Sum(int x)
{
	double s = 0;
	int gt = 1;

	for (int i = 1; i <= x; i++)
	{
		gt *= i;
		s += gt;
	}
	cout << "ket qua la: " << s << endl;
}

