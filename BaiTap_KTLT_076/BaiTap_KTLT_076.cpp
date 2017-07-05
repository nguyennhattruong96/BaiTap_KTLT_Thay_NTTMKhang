#include "BaiTap_KTLT_076.h"


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

bool KiemTra3k(int x)
{
	while (x !=0)
	{
		if (x % 3 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

