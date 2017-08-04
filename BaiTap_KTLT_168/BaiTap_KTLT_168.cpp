#include "BaiTap_KTLT_168.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "So Nhap Vao La So Am Hay Nhap Lai" << endl;
		}

	} while (n < 0);

	return n;
}


void Output(int n)
{
	cout << "ket qua la: " << n << endl;
}


bool KiemTraSoNguyenTo(int n)
{
	if (n == 0 || n == 1)
		return false;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}
