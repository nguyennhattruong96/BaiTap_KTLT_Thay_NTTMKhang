#include "BaiTap_KTLT_075.h"


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

bool KiemTra2k(int x)
{
	double k = log10((double)x) / log10(2.0);

	if (k== (int) k)
	{
		return true;
	}
	else
	{
		return false;
	}
}

