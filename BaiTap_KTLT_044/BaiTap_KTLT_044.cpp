#include "BaiTap_KTLT_044.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;
		if (n <= 0)
		{
			cout << "so ban nhap la 0 hoac la so am hay nhap vao so khac" << endl;
		}
	} while (n <= 0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void TongChuSo(int n)
{
	int s = 0;

	while (n > 0)
	{
		int SoNguyen = n % 10;
		s += SoNguyen;
		n = n / 10;
	}
	cout << "tong la:" << s << endl;
}
