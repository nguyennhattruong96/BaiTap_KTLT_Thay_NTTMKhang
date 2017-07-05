#include "BaiTap_KTLT_027.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;
		if (n<0)
		{
			cout << "nhap vao so lon hon 0";
		}
	} while (n<0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void SoLuongUocSoChang(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			if (i % 2 == 0)
			{
				dem++;
			}
		}
	}
	cout << "So Luong uoc so Chang cua " << n << " la:" << dem << endl;
}
