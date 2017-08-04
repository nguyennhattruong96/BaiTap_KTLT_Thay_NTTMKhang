#include "BaiTap_KTLT_131.h"


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
	cout << "ket qua la: " << n << endl;
}


void SoLonNhat (int n)
{
	int soNguyen = n;
	int soDu = 0;
	int max = 0;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		if (soDu > max)
		{
			max = soDu;
		}

		soNguyen = soNguyen / 10;
	}

	cout << "So lon nhat cua chu so cua so nguyen " << n << " la: " << max << endl;
}
