#include "BaiTap_KTLT_079.h"


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

void DemSoLuong(int x)
{
	int soNguyen = x;
	int soDu = 0;
	int dem = 0;
	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;
		dem++;
		soNguyen = soNguyen / 10;
	}
	cout << "so luong cua so nguyen " << x << " la:" << dem << endl;
}

