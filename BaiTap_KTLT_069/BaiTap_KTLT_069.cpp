#include "BaiTap_KTLT_069.h"


int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "so ban nhap la so am hay nhap lai";
		}
	} while (n < 0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

void Tong(int x, int n)
{
	int s = 0;

	for (int i = 0; i <= n; i++)
	{
		s += pow(-1, (i)) * pow(x, (2 * i + 1));
	}

	cout << "ket qua cua phep toan la:" << s << endl;
}

