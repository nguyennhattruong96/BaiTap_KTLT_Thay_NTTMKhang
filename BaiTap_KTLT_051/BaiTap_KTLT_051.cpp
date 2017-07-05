#include "BaiTap_KTLT_051.h"


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

void SoLonNhat(int n)
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
	cout << "so lon nhat cua so nguyen" << n << " la:" << max << endl;
}
