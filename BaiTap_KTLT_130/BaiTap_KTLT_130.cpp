#include "BaiTap_KTLT_130.h"


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


void SoNghichDao (int n)
{
	int soNguyen = n;
	int soDu = 0;
	int nd = 0;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		nd = nd * 10 + soDu;

		soNguyen = soNguyen / 10;
	}

	cout << "So nghich dao cua chu so cua so nguyen " << n << " la: " << nd << endl;
}
