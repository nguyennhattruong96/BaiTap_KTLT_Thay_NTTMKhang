#include "BaiTap_KTLT_049.h"


int Input (string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So Am Hoac So 0 Hay Nhap Lai" << endl;
		}

	} while (n <= 0);

	return n;
}


void Output (int n)
{
	cout << "Ket qua la: " << n << endl;
}


void SoDauTien (int n)
{
	int F = 0;

	while (n > 0)
	{
		int SoNguyen = n % 10;

		F = SoNguyen;

		n = n / 10;
	}

	cout << "So dau tien cua chu so nguyen la: " << F << endl;
}
