#include "BaiTap_KTLT_046.h"


int Input (string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So Am Hoac So O Hay Nhap Lai" << endl;
		}

	} while (n <= 0);

	return n;
}


void Output (int n)
{
	cout << "Ket qua la: " << n << endl;
}


void SoLuongChuSoLe (int n)
{
	int dem = 0;

	while (n > 0)
	{
		int SoNguyen = n % 10;

		if (SoNguyen % 2 != 0)
		{
			dem++;
		}

		n = n / 10;
	}

	cout << "So luong chu so le la: " << dem << endl;
}
