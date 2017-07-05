#include "BaiTap_KTLT_054.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;
		if (n < 0)
		{
			cout << "so ban nhap la so nho hon hay nhap vao so khac" << endl;
		}
	} while (n < 0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void SoLuongSoNhoNhat(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int min = soNguyen % 10;
	int dem = 0;

	if (soNguyen == 0)
	{
		min = 0;
	}
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
	cout << "so luong so nho nhat cua so nguyen" << n << " la:" << dem << endl;
}
