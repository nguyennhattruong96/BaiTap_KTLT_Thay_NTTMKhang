#include "BaiTap_KTLT_049.h"


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

void SoDauTien(int n)
{
	int F = 0;

	while (n > 0)
	{
		int SoNguyen = n % 10;
		F = SoNguyen;
		n = n / 10;
	}
	cout << "so dau tien cua chu so nguyen la:" << F << endl;
}
