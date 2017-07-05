#include "BaiTap_KTLT_053.h"


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

void SoLuongSoLonNhat(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int max = 0;
	int dem = 0;
	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		soNguyen = soNguyen / 10;
		if (soDu > max)
		{
			max = soDu;
		}
		if (soDu == max)
		{
			dem++;
		}
	}
	cout << "so luong so lon nhat: " << n <<" la:"<< dem << endl;
}

