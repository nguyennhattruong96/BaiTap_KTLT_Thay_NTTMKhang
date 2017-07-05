#include "BaiTap_KTLT_089.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "so ban nhap la so am hay nhap lai";
		}
	} while (n < 0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void LuyThua(int x,int n)
{
	int kq;
	kq = pow(x, n);
	cout << "ket qua la: " << kq << endl;
}

