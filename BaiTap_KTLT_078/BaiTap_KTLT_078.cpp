#include "BaiTap_KTLT_078.h"


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

void UocSoNguyen(int x)
{
	int s = 0;
	for (int i = 1; i <= x; i++)
	{
		if (x%i==0)
		{
			cout << "uoc so nguyen cua " << x << " la:"<< i << endl;
		}
	}
}

