#include "BaiTap_KTLT_046.h"


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

void SoLuongChuSoLe(int n)
{
	int dem = 0;

	while (n > 0)
	{
		int SoNguyen = n % 10;
		if (SoNguyen % 2 !=0)
		{
			dem++;
		}
		n = n / 10;
	}
	cout << "so luong chu so le la:" << dem << endl;
}
