#include "BaiTap_KTLT_134.h"


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


void SoLuongSoNhoNhat (int n)
{
	int soNguyen = n;
	int soDu = 0;
	int min = 9;
	int dem = 0;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		if (soDu < min)
		{
			min = soDu;
		}

		if (soDu == min)
		{
			dem++;
		}

		soNguyen = soNguyen / 10;
	}

	cout << "So luong chu so nho nhat cua chu so cua so nguyen " << n << " la: " << dem << endl;
}
