#include "BaiTap_KTLT_070.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "so ban nhap la so am hoac la so khong hay nhap lai";
		}
	} while (n <= 0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

double Tong(int x)
{
	double s = 0;
	int mau = 0;

	for (int i = 1; i <= x; i++)
	{
		mau = mau + i;
		s += pow(-1, (i+1)) * (1.0 / mau);

	}

	return s;
}

