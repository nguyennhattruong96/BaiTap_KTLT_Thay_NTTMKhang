#include "BaiTap_KTLT_050.h"


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

void SoNgichDao(int n)
{	int soNguyen = n;
	int soDu = 0;
	int ND = 0;
	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;
		soNguyen = soNguyen / 10;
		ND = ND * 10 + soDu;
	}
	cout << "so nghich dao cua so nguyen"<< n <<" la:" << ND << endl;
}
