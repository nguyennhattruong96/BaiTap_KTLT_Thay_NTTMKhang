#include "BaiTap_KTLT_080.h"


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

void Sum(int x,int n)
{
	double s = 0;
	int mau = 0;
	for (int i = 1; i <= n; i++)
	{
		mau += i;
		s += pow(x, i) / mau;
	}
	cout << "ket qua la: " << s << endl;
}
