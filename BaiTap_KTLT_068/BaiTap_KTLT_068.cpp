#include "BaiTap_KTLT_068.h"


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

void Tong(int x, int n)
{
	int s = 0;

	for (int i = 1; i <= n; i++)
	{
		s += pow(-1, (i)) * pow(x, (2*i));
	}

	cout << "ket qua cua phep toan la:" << s << endl;
}

