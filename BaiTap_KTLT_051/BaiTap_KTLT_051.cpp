#include "BaiTap_KTLT_051.h"


int Input (string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So Am Hoac So 0 Hay Nhap lai" << endl;
		}

	} while (n <= 0);

	return n;
}


void Output (int n)
{
	cout << "Ket qua la:" << n << endl;
}


void SoLonNhat (int n)
{
	int soNguyen = n;
	int soDu = 0;
	int max = 0;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;
		soNguyen = soNguyen / 10;

		if (soDu > max)
		{
			max = soDu;
		}
	}

	cout << "So lon nhat cua so nguyen " << n << " la: " << max << endl;
}
