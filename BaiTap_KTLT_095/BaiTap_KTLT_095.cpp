#include "BaiTap_KTLT_095.h"


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

void Sum(int x, int n)
{
	double s = 0;
	int tu = 0;
	int mau = 1;

	for (int i = 1; i <= n; i++)
	{
		tu += pow(x, i);
		s += 1.0*tu / mau;
		mau += i;
	}
	cout << "ket qua la: " << s << endl;
}

